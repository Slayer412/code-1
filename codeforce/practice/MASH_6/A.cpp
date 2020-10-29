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
	int n;cin>>n;
	pair<int,int> a;cin>>a.F>>a.S;
	pair<int,int> b;cin>>b.F>>b.S;
	pair<int,int> c;cin>>c.F>>c.S;
	if(b.F<a.F && c.F<a.F){
		if(((b.S < a.S && c.S <a.S ) || (b.S>a.S && c.S > a.S))){
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";
	}
	else if(b.F > a.F && c.F > a.F){
		if((b.S >a.S && c.S > a.S) || (b.S < a.S && c.S < a.S)){
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";
		
	}
	else
	cout<<"NO\n";
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}