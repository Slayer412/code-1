#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int ans=0;
map<ll,ll> pf(ll n){
	map<ll,ll> p_f;
	for(ll i=2;i*i<=n;i+=1LL){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				n/=i;
				++cnt;
			}
			if(cnt){
				p_f[i]=cnt;
			}
			
		}
	}
	if(n>1){
		p_f[n]=1;
	}
	return p_f;
}
ll power(ll x,ll y){
	  ll res = 1LL;     // Initialize result 
   
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1LL) 
            res = res*x; 
   
        // y must be even now 
        y = y>>1; // y = y/2 
        x = x*x;  // Change x to x^2 
    } 
    return res; 
}
void solve()
{		ans=0;
		ll n;cin>>n;
		map<ll,ll> mp=pf(n);
		vector< pair<ll,ll> > vec;
		for(auto it:mp){
		//	cout<<it.F<<" "<<it.S<<endl;
			vec.push_back({it.S,it.F});
		}
		int sz=vec.size();
		 sort(all(vec));
		 ans=vec[sz-1].F;
		 ll mul=1LL;
		 for(int i=0;i<sz-1;i++){
			 mul*=power(vec[i].S,vec[i].F);
		 }
		mul*=vec[sz-1].S;
		int i=vec[sz-1].F;
		cout<<ans<<endl;
		while(--i)cout<<vec[sz-1].S<<" ";
		cout<<mul<<endl;
		
		
		
		
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}