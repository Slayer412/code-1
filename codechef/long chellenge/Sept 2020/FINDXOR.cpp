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

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--){
    	ll n;cin>>n;
    	ll k=1LL<<4;
    	cout<<1<<" "<<k<<endl;
    	ll sum;cin>>sum;
    	sum=sum-(n*k);
    	ll x=(1 & sum);
    	f(i,1,3){
    		ll k=1<<i;
    		cout<<1<<" "<< k <<endl;
    		ll t;cin>>t;
    		int cnt=(sum-t+(n*k))/(2*k);
    		if(cnt%2){
    			x+=k;
    		}
    		
    	}
    	cout<<2<<" "<<x<<endl;
    	int f;cin>>f;
    	if(f==-1){
    	    return 0;
    	}

	}
	return 0;
}