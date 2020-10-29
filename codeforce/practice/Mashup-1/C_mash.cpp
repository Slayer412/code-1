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
	vi a(n),vis(1e5+6);
	set<int> pres;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a[i]=x;
		vis[x]++;
	}
	if(n==1){
		cout<<1<<" ";
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i])
		pres.insert(i);
	}
	for(int i=0;i<=n;i++)vis[i]=0;
	for(int i=0;i<n;i++){
		if(a[i]>n || vis[a[i]]){
			cout<<*pres.begin()<<" ";
			pres.erase(pres.begin());
			vis[a[i]]++;
		}
		else{
			cout<<a[i]<<" ";
			vis[a[i]]++;
		}
		
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}