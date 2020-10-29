#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define MOD 10000007
/* Iterative Function to calculate (x^y) in O(log y) */
#include <bits/stdc++.h>
#define M 1000000007
#define ll long long
using namespace std;
ll power(int x, unsigned int y)
{
	ll res = 1;	 // Initialize result

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = res*x;

		// y must be even now
		y = y>>1; // y = y/2
		x = x*x; // Change x to x^2
	}
	return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        long long arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        if(N>=64)
            cout<<0<<endl;
        else
        {
            long long val=1ll<<(N-1);
            long long ans=0;
            for(int i=0;i<N;i++)
                if(arr[i]>=val)
                    ans=(ans+arr[i]%M)%M;
            cout<<ans<<endl;
        }
    }
}

void solve()
{
	int n;cin>>n;
	vector< ll > a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	ll ans=0;
	ll k=power(2,n)>>1;
	//cout<<k<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=k)
		ans+=a[i]%MOD;
	}
	cout<<ans%MOD<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

