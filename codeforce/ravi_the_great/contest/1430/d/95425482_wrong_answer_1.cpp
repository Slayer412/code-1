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
	int n;cin>>n;
	string s;cin>>s;
	if(n==1){
		cout<<1<<'\n';
		return;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]!=s[i+1]){
			++cnt;
			++i;
		}
		else{
			while(s[i]==s[i+1])++i;
			++cnt;
		}
	}
	cout<<cnt<<'\n';
	

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}