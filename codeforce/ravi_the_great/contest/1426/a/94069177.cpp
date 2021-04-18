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
	int n,x;
	cin>>n>>x;
	if(n<=2)cout<<1<<'\n';
	else{
		int cnt=2;
		if(n>=3 && n<=2+x)
			cout<<2<<'\n';
		else{
			int f=3,end=x+2;
			int m=1;
			int cnt=2;
			while(1){
				if(n>=f && n<=end){
					cout<<cnt<<'\n';
					return;
				}
				f+=x;
				end+=x;
				++cnt;
			}
		}
		
	}
}
int main()	
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}