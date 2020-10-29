#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int find(int l,int r,int x,vi &pref){
	int mid;
	int n=pref.size();
	while(l<=r){
		mid=(l+r)/2;
	//	cout<<"MID "<<mid<<'\n';
		if(pref[mid]==x)
		return mid+1;
		if(mid==n-1 || mid==0 ){
			if(pref[mid]>=x)
			return mid+1;
			else
			l=mid+1;
		}
		if(pref[mid]<x && mid+1<n && pref[mid+1]>=x)return min(mid+2,n);
		if(pref[mid]>x)
		r=mid-1;
		else
		l=mid+1;
	}
	return mid+1;
}
void solve()
{
	int n,m;cin>>n;
	vi a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	vi pref(n);
	pref[0]=a[0];
	f(i,1,n-1)pref[i]=pref[i-1]+a[i];
	cin>>m;
	for(int i=0;i<m;i++){
		int ele;cin>>ele;
	//	cout<<ele<<'\n';
		cout<<find(0,n-1,ele,pref)<<'\n';
	}
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}