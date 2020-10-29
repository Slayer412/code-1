#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string s;cin>>s;
	int n=s.size();
	f(i,0,n-1){
		if(isupper(s[i])){
			if(s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E')
			continue;
			else{
			cout<<'.'<<((char)('a'+(s[i]-'A')));
			}
		}
		else{
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			continue;
			else
			cout<<'.'<<((char)('a' + (s[i]-'a')));
		}
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}