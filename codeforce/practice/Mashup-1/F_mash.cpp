#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
vector<int> V[200006];
void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int m=0;
	for(int i=0;i<n;i++){
		if(m==0 || a[i]<V[m-1].back()){
			V[m].push_back(a[i]);
			++m;
		}
		else{
			int low=0,hi=m,ans=0;
			while(low<=hi){
				int mid=(low+hi)/2;
				if(a[i]>V[mid].back()){
					ans=mid;
					hi=mid-1;
				}
				else
				low=mid+1;
			}
			V[ans].push_back(a[i]);
		}
	}
	for(int i=0;i<m;i++){
		for(auto it:V[i])
		cout<<it<<" ";
		cout<<'\n';
	}
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}