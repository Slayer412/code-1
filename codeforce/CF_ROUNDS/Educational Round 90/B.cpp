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
	auto itr=s.begin();
	if(s.size()==1){
		cout<<"NET\n";
		return;
	}
	int one=0,z=0;
	int n=s.size();
	f(i,0,n-1)if(s[i]=='1')++one;else ++z;
	int x=min(one,z);
	if(x%2==0)cout<<"NET\n";
	else
	cout<<"DA\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}