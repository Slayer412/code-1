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
	vi a(n);
	for(int &x:a)cin>>x;
	int i=0,j=0;
	map<int,int> mp;
	int ans=1;
	int curlen=0,max_len=0;
	while(j<n){
		if(mp.find(a[j])==mp.end() || mp[a[j]]==0){
			curlen++;
			mp[a[j]]++;
			max_len=max(max_len,curlen);
			++j;
		}
		else{
			curlen--;
			mp[a[i]]--;
			++i;
		}
		
	}
	cout<<max_len<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}