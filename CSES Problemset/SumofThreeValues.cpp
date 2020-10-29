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
	int n,X;cin>>n>>X;
	map<int,int> cnt;
	vi a(n);
	for(int i=0;i<n;i++)cin>>a[i],cnt[a[i]]=i;
	f(i,0,n-2){
		ll sum=a[i];
		f(j,i+1,n-1){
			sum=a[i]+a[j];
			if(sum<X && cnt[X-sum]){
				if(cnt[X-sum]!=i && cnt[X-sum]!=j){
					cout<<i+1<<" "<<j+1<<" "<<cnt[X-sum]+1<<'\n';
					return;
				}
			}
		}
	}
	cout<<"IMPOSSIBLE\n";
	
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}