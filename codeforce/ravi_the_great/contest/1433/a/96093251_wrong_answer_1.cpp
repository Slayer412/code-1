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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string s;cin>>s;
	if(s.size()==1){
		cout<<1<<'\n';
		return;
	}
	else{
		if(s[0]=='1'){
			if(s.size()==4){
				cout<<10<<'\n';
			}
			else if(s.size()==3){
				cout<<6<<'\n';
			}
			else if(s.size()==2){
				cout<<3<<'\n';
			}
		}
		if(s[0]=='2'){
			if(s.size()==4){
				cout<<10+10<<'\n';
			}
			else if(s.size()==3){
				cout<<10+6<<'\n';
			}
			else if(s.size()==2){
				cout<<10+3<<'\n';
			}
		}
		if(s[0]=='3'){
			if(s.size()==4){
				cout<<20+10<<'\n';
			}
			else if(s.size()==3){
				cout<<20+6<<'\n';
			}
			else if(s.size()==2){
				cout<<20+3<<'\n';
			}
		}
		if(s[0]=='4'){
			if(s.size()==4){
				cout<<30+10<<'\n';
			}
			else if(s.size()==3){
				cout<<30+6<<'\n';
			}
			else if(s.size()==2){
				cout<<30+3<<'\n';
			}
		}
		if(s[0]=='5'){
			if(s.size()==4){
				cout<<40+10<<'\n';
			}
			else if(s.size()==3){
				cout<<40+6<<'\n';
			}
			else if(s.size()==2){
				cout<<40+3<<'\n';
			}
		}
		if(s[0]=='6'){
			if(s.size()==4){
				cout<<50+10<<'\n';
			}
			else if(s.size()==3){
				cout<<50+6<<'\n';
			}
			else if(s.size()==2){
				cout<<50+3<<'\n';
			}
		}
		if(s[0]=='7'){
			if(s.size()==4){
				cout<<60+10<<'\n';
			}
			else if(s.size()==3){
				cout<<60+6<<'\n';
			}
			else if(s.size()==2){
				cout<<60+3<<'\n';
			}
		}
		if(s[0]=='8'){
			if(s.size()==4){
				cout<<70+10<<'\n';
			}
			else if(s.size()==3){
				cout<<70+6<<'\n';
			}
			else if(s.size()==2){
				cout<<70+3<<'\n';
			}
		}
		if(s[0]=='9'){
			if(s.size()==4){
				cout<<80+10<<'\n';
			}
			else if(s.size()==3){
				cout<<80+6<<'\n';
			}
			else if(s.size()==2){
				cout<<80+3<<'\n';
			}
		}

	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}