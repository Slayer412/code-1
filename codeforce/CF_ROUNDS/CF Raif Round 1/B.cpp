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
	int Less=0,Great=0,both=0;
	f(i,0,n-1){
		if(s[i]=='>')++Great;
		else if(s[i]=='<')++Less;
		else
			++both;
	}
	if(both+Less==n || both+Great==n){
		cout<<n<<'\n';

	}
	else{
		int vis[n]={0};
		f(i,0,n-1){
			if(s[i]=='-'){
				vis[i]=1;
				if(i==n-1)vis[0]=1;
				else
				vis[i+1]=1;
			}
		}
		int cnt=0;
		f(i,0,n-1)cnt+=vis[i];
		cout<<cnt<<"\n";
	}

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}