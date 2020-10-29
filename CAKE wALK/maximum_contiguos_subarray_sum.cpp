#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll max(ll a, ll b) { return (a > b)? a : b; }
ll max(ll a, ll b, ll c) { return max(max(a, b), c); }
ll maxCrossingSum(vector < ll > &arr, ll l, ll m, ll h)
{
	// Include elements on left of mid.
	ll sum = 0;
	ll left_sum = INT_MIN;
	for (ll i = m; i >= l; i--)
	{
		sum = sum + arr[i];
		if (sum > left_sum)
		left_sum = sum;
	}

	// Include elements on right of mid
	sum = 0;
	ll right_sum = INT_MIN;
	for (ll i = m+1; i <= h; i++)
	{
		sum = sum + arr[i];
		if (sum > right_sum)
		right_sum = sum;
	}

	return left_sum + right_sum;
}
ll maxSubArraySum(vector <ll > &arr, ll l, ll h)
{
// Base Case: Only one element
if (l == h)
	return arr[l];

ll m = (l + h)/2;
return max(maxSubArraySum(arr, l, m),
			maxSubArraySum(arr, m+1, h),
			maxCrossingSum(arr, l, m, h));
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;
        int p=0,index=0;cin>>n;
        vector< ll > v;
        ll ans[n];
      //  ll *tree=new ll[2*n];
        for(ll i=0;i<n;++i)
        cin>>v[i];
        for(auto i=v.begin() ;i!=v.end();++i)
        {
            if(i!=v.begin()){
            v.push_back(*i);
            v.erase(i);
            ++p;
            }
            if(index==n-1)
                break;
            ans[index++]=maxSubArraySum(v,0,n+p);
        }
        for(auto i : ans)
        cout<<ans[i]<<" ";

    }
return 0;
}

