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
	int n;cin>>n;
	string a,b;cin>>a>>b;
	vector<int> ans;
	for(int i=n-1;i>=0;--i){
		if(a==b)
		break;
		if(a[0]==b[i]){
			ans.push_back(1);
			if(a[0]=='1')a[0]='0';
			else
			a[0]='1';
			++i;
		}
		else{
			string s="";
			for(int j=0;j<=i;++j){
				if(a[j]=='1')s+='0';
				else
				s+='1';
			}
			reverse(s.begin(),s.end());
			for(int j=i+1;j<n;++j)
			s+=a[j];
		//	cout<<i<<" "<<s<<'\n';
			a=s;
			ans.push_back(i+1);
		}
	}
	cout<<ans.size()<<' ';
	for(auto it:ans)cout<<it<<' ';
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}