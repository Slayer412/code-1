#include<iostream>
using namespace std;
#define ll long long
#define M 1000000007
#define endl '\n'
int gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(ll arr[], int n) 
{ 
    // Initialize result 
    ll ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (int i = 1; i < n; i++) 
        ans = (((arr[i]%M * ans%M)) / 
                (gcd(arr[i]%M, ans%M))); 
  
    return ans; 
} 
void solve()
{
	int n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	
	ll LCM=findlcm(arr,n);
	cout<<LCM<<endl;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=(LCM/arr[i]);
		cout<<LCM/arr[i]<<endl;
	}
	cout<<ans<<endl;
	
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

