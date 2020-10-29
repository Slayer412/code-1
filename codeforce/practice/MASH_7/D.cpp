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
	string s;cin>>s;
	int n=s.size();
	string b="bear";
	int l=0,r=0;
	int ind=0;
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(s[j]==b[ind]){
				while(s[j]==b[ind] && ind<4 && j<n)++j,++ind;
				if(ind==4){
			//		cout<<i<<" "<<j<<'\n';
					ans+=(n-j)+1;	
					//cout<<ans<<'\n';
					ind=0;
					break;
				}
				ind=0;
				--j;
			}
		}
	}
	cout<<ans<<'\n';
	
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}