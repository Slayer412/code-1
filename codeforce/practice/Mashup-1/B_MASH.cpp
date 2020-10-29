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
	vi a(n);
	f(i,0,n-1)cin>>a[i];

	sort(a.begin(),a.end());
	vi dup(a.begin(),a.end());
	for(int i=n-1;i>=0;i--){
		if(a[i]!=-1)
		for(int j=0;j<i;j++){
			if(a[j]!=-1){
				if(a[i]%a[j]==0)
				a[j]=-1;
			}
		}
	}
	int cnt=0;
	int ele;
	for(auto it:a){
		if(it!=-1){
		ele=it;
		cout<<it<<" ",++cnt;
		}
	}
	if(cnt==1){
		map<int,int> vis;
		sort(dup.rbegin(),dup.rend());
		for(auto it:dup){
			if(ele%it==0 && vis[it]==0){
				vis[it]=1;
			}
			else{
				cout<<it<<" ";
				return;
			}
		}
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}