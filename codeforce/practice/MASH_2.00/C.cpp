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
{	int n;cin>>n;
	string a,b;cin>>a>>b;
	ll ans=0;
	f(i,0,n-1){
		if(a[i]==b[i])	
			continue;
		else{
			
			if(i<n-1 && a[i]==b[i+1] && b[i]==a[i+1] && b[i]!=a[i] && b[i+1]!=a[i+1]){
				a[i]=b[i];
				a[i+1]=b[i+1];
				ans+=1;
			}
			else if(a[i]!=b[i]){
				ans+=1;
				a[i]=b[i];
			}
		}
	//	cout<<i<<" "<<a[i]<<" "<<b[i]<<" "<<ans<<'\n';
	}
	cout<<ans;

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}