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
vector< vector<int> > dp(3005,vector<int> (3005));
string s,t;

int f=1,last=0;
string temp="",ans="";
vector< pair<int,int > > a;
int LCS(int i,int j){
	if(i<=0 || j<=0){
		return 0;
	}
	if(s[i-1]==t[j-1]){
		a.pb({i-1,j-1});
		temp+=s[i-1];
		return 1+LCS(i-1,j-1);
	}
	else {
		return max(LCS(i-1,j),LCS(i,j-1));
	}
}
void solve()
{	cin>>s>>t;
	int n=s.size();
	int m=t.size();
	LCS(n,m);
	int siz=a.size();
	sort(all(a));
	string res="";
	res+=s[a[siz-1].F];
	fr(i,siz-2,0){
		if(a[i].F >= a[i-1].S)continue;
		else
			res+=s[a[i].F];
	}
	reverse(all(res));
	cout<<res<<'\n';
}
int main()
{	Fast;
	int t=1;//cin>>t;
	while(t--)
	solve();
}