#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{	int n;cin>>n;
	string s;
	cin>>s;
	int open=0,close=0;
	int mx=0;
	for(int i=0;i<n;i++){
		if(s[i]==')'){
			close++;
		}
		else{
			open++;
		}
		if(close>open){
			mx=max(mx,close-open);
		}
	}
	cout<<mx<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}