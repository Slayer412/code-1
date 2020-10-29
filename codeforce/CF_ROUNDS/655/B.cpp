#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll gcd(ll a, ll b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
 ll lcm(ll a, ll b){
 	return (ll)(a*b)/gcd(a,b);
 }
 bool isprime(ll n){
 	for(int i=2;i*i<=n;++i){
 		if(n%i==0)return 0;
 	}
 	return 1;
 }
ll power(ll x,int y) 
{ 
    ll res = 1;     // Initialize result 
   
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res*x; 
   
        // y must be even now 
        y = y>>1; // y = y/2 
        x = x*x;  // Change x to x^2 
    } 
    return res; 
}
void solve()
{
	ll n;cin>>n;
	ll nn=n;
	if(n%2==0){
		cout<<n/2LL<<" "<<n/2LL<<'\n';
		return;
	}
	if(isprime(n)){
		//cout<<"HEER\n";
		cout<<1<<" "<<n-1<<'\n';
		return;
	}
	pair<ll,ll> needed;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
			n/=i;
			++cnt;
			}
		 	needed={i,cnt};
			break;
		}
	}
	ll b=nn;
	ll p=needed.S >1 ? needed.S-1 :1;
	b/=power(needed.F,p);
	cout<<nn-b<<" "<<b<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}