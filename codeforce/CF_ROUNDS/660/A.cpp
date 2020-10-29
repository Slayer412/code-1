#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int limit=2*1e5;
map<ll,int> prime;
void simpleSieve() 
{ 
    
    for (int p=2; p*p<limit; p++) 
    { 
        // If p is not changed, then it is a prime 
        if (prime[p]==0) 
        { 	prime[p]++;
            // Update all multiples of p 
            for (int i=p*2; i<limit; i+=p) 
                prime[i] = 0; 
        } 
    } 
   
} 
void solve()
{
	ll n;cin>>n;
	if(n<=6+10+14){
		cout<<"NO\n";
		return;
	}
	else{
		if(n==36){
			cout<<"YES\n";
			cout<<6<<" "<<10<<" "<<15<<" "<<5<<"\n";
		}
		else if(n==40){
			cout<<"YES\n";
			cout<<6<<" "<<14<<" "<<15<<" "<<5<<'\n';
		}
		else if(n==44){
			cout<<"YES\n";
			cout<<6<<" "<<10<<" "<<15<<" "<<44-31<<'\n';
		}
		else{
			cout<<"YES\n";
			cout<<6<<" "<<10<<" "<<14<<" "<<n-6-10-14<<'\n';
		}
	}
	
}
int main()
{	Fast;
	
	int t;cin>>t;
	while(t--)
	solve();
}