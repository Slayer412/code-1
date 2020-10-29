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
	string s;cin>>s;
	map< pair<char,char>,int> cnt;
	pair<char,char> ans;
	int mx=0;
	for(int i=0;i<n-1;i++){
		cnt[{s[i],s[i+1]}]++;
		if(mx<cnt[{s[i],s[i+1]}]){
			ans={s[i],s[i+1]};
			mx=cnt[{s[i],s[i+1]}];
		}
	}
	cout<<ans.F<<ans.S<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}