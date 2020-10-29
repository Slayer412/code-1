#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int binarysearch(vll &a,int l,int r){
	ll mid=0;
	int n=a.size();
	int L=l,R=r;
	l=0,r=n-1;
	int ans=0;
	if(L==R){
		while(l<r){
			mid=(l+r)/2;
			if(a[mid]==L){
				l=mid;
				break;
			}
			else if(a[mid]>L)
				r=mid-1;
			else
				l=mid+1;
		}
				if(a[l]!=L)return 0;
				int cnt=1;
				int i=l-1;
				int j=l+1;
				while(i>=0 && a[i]==L)++cnt,--i;
				while(j<n-2 && a[j]==L)++cnt,++j;
				return cnt;
		return 0;
	}
	while(l+1<r){
		mid=(l+r)/2;
		if(a[mid]<L)
		l=mid;
		else
		r=mid;
	}
	int t=l;
//	cout<<l<<" "<<r<<'\n';
	if(a[l]<L)t=r;
	l=0,r=n-1;
	while(l+1<r){
		mid=(l+r)/2;
		if(a[mid]<=R)
		l=mid;
		else
		r=mid;
	}
//	cout<<l<<" "<<r<<'\n';
	int t1=r;
	if(a[r]>R)t1=l;
	ans=t1-t+1;
	return ans;
	
}
void solve()
{	

	int n;cin>>n;
	vll a(n+2);
	f(i,0,n-1)cin>>a[i];
	a[n]=1e9+5;
	a[n+1]=-(1e9+5);
	int q;cin>>q;
	sort(a.begin(),a.end());
	//for(auto it:a)cout<<it<<" ";
	//cout<<'\n';
	while(q--){
		int l,r;cin>>l>>r;
		cout<<binarysearch(a,l,r)<<' ';
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}