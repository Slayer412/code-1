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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	string t;cin>>t;
	int cnt=0;
	int i=0;
	int last=0;
	int j=i;
	while(i<n){
		j=i;
		while(( s[j]!=t[0] || s[j+1]!=t[1])){
			++j;
			if(j>=n-1)break;
		}
		j++;
		if(j<=n-1){
			//cout<<j<<" "<<last<<endl;
			cnt+=(j-last);
			cnt+=(n-1-j);
			cout<<cnt<<endl;
			++last;
			i=j;	
		}
		else
		break;
	}
	if(last>1)
	cnt+=(j-last-2);
	
	
	cout<<cnt;
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}