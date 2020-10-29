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
	ll n,a,b;cin>>n>>a>>b;
	string s;cin>>s;
	ll o=0,clo=0;
	for(int i=0;i<n;i++){
		if(s[i]=='(')++o;
		else ++clo;
	}
	ll ans=a*n;
	ll res=0,open=0,close=0,add_back=0,del=0;
	if(o>clo)o=o-clo,clo=0;
	else clo=clo-o,o=0;
	f(i,0,n-1){
		if(s[i]=='(')++open;
		else if(s[i]==')' && open)--open;
		else{
			if(clo>o){
				res+=a;
				--clo;
			}
			else if( b < a){
				res+=b;
				++add_back;
			}
			else if(2*a<b){
				res+=2*a;
				++del;
			}
			else{
				res+=b;
				++add_back;
			}
		}
	}
	if(open){
		open-=add_back;
		open-=del;
		if(open){
			res+=a*open;
		}
	}
	if(clo){
		res+=a*clo;
	}
	cout<<min(ans,res)<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}