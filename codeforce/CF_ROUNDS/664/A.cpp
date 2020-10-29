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
	int a,b,c,d;cin>>a>>b>>c>>d;
	if(!a && !b && !c && !d){
		cout<<"Yes\n";
		return;
	}
//	auto it;
	int odd=0,even=0;
	int cnt=0;
	if(a)++cnt;
	if(b)++cnt;
	if(c)++cnt;
	if(a && a%2)++odd;
	if(b && b%2)++odd;
	if(c && c%2)++odd;
	even=4-odd;
	if(odd==2 && d%2 && cnt==3){
		cout<<"Yes\n";
	}
	else if(odd==3 || odd==0 || (odd==1 && d%2==0)){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}