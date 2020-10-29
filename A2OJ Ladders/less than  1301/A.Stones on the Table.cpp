#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	int sum=0,cnt=0;
	for(int i=1;i<n;i++){
		if(s[i-1]==s[i])
		++cnt;
		else{
			sum+=cnt;
			cnt=0;
		}
	}
	if(cnt)sum+=cnt;
	cout<<sum<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}