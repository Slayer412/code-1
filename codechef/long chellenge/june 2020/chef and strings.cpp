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
	int cnt=0;
	int n=s.length();
	f(i,1,n-1){
		if(s[i]!=s[i-1]){
			i++;
			cnt++;
		}
	}
	cout<<cnt<<'\n';
}
int main()
{	Fast
	int t;cin>>t;
	while(t--)
	solve();
}