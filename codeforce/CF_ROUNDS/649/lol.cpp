#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k,m;cin>>n>>k>>m;
	vi a(n);
	map<string,int> cnt;
	string all[n],seg[m];
	f(i,0,n-1){
		cin>>all[i];
	}
	f(i,0,n-1){
		cin>>a[i];
		cnt[all[i]]=a[i];
	}
	f(i,0,k-1){
		int x;cin>>x;
		int arr[x];
		f(j,0,x-1)cin>>arr[x];
		int mini=INT_MAX;
		for(int ii:arr){
			mini=min(mini,a[ii]);
		}
		f(j,0,x-1){
			cnt[all[arr[j]]]=mini;
		}
	}
	int sum=0;
	string s;
	f(i,0,m-1){
		cin>>s;
		sum+=cnt[s];
	}
	cout<<sum<<'\n';
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}