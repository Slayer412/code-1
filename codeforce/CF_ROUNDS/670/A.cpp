#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll findMaxProduct(vll &arr, int n, int k) 
{ 
    // Initialize the MaxProduct to 1, as all elements 
    // in the array are positive 
    ll MaxProduct = 1; 
    for (int i=0; i<k; i++) 
        MaxProduct *= arr[i]; 
  
    int prev_product = MaxProduct; 
  
    // Consider every product beginning with arr[i] 
    // where i varies from 1 to n-k-1 
    for (int i=1; i<=n-k; i++) 
    { 
        ll curr_product = (prev_product/arr[i-1]) * 
                            arr[i+k-1]; 
        MaxProduct = max(MaxProduct, curr_product); 
        prev_product = curr_product; 
    } 
  
    // Return the maximum product found 
    return MaxProduct; 
} 
void solve()
{
	int n;cin>>n;
	vll a(n);
	f(i,0,n-1)cin>>a[i];
	ll ans= findMaxProduct(a,n,5);
	cout<<ans<<'\n';



}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}