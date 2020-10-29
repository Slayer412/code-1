#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	vll a(n);
	ll mx=-1LL*(1e9+10); 
	for(i,0,n-1)cin>>a[i],mx=max(mx,a[i]);
	vector<ll> ans[10];
	ll d=mx;
	int i,k;
    for(i=0;i<=10;i++){
    	mx=-1LL*(1e9+10);
    	for(int j=0;j<n;j++){
    		a[j]=d-a[j];
    		mx=max(a[j],mx);
    	}
    	--k;
    	ans[i].push_back(a);
    	int ok=0;
    	if(i>2){
    		
	    	for(k=0;k<i;k++){
	    		if(ans[i]==ans[k] ){
	    			ok=1;
	    			break;
	    		}
	    	}
    	}
    	if(ok)break;
    }
    if(k%2){
    	for(auto it:ans[i])cout<<it<<' ';
    }
	else
		for(auto it:ans[k])cout<<it<<' ';
	cout<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}