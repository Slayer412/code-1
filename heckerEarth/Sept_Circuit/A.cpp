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
void solve()
{
	int n;cin>>n;
	vi a(n);
	vi odd(n),even(n);
	f(i,0,n-1){
		cin>>a[i];
		if(i==0)
			odd[i]=a[i]%2,even[i]=!(a[i]%2);
		else{
			odd[i]=odd[i-1]+a[i]%2;
			even[i]=even[i-1]+ (!(a[i]%2));
		}
	}
	int q;cin>>q;
	while(q--){
		int l,r;cin>>l>>r;
		int ans;
		if(l==1){
			ans=even[r-1]-even[l-1];
		}	
		else{
			ans=(even[r-1]-even[l-2]);
		}
		cout<<ans<<'\n';
	}
	

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}