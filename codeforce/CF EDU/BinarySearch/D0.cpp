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
vll a(100005);
int n;
int binarysearch(int l,int r){
	ll mid=0;
	int L=l,R=r;
	l=0,r=n;
	ll ans=0;
	if(L==R){
		while(l<r){
			mid=(l+r)/2;
			if(a[mid]==L)
				return 1;
			else if(a[mid]>L)
				r=mid-1;
			else
				l=mid+1;
		}
		return 0;
	}
	while(1){
		mid=(l+r)/2;
		if(a[mid]<L)
			l=mid;
		else
			r=mid-1;
		if((l<n-1 && a[l]>=L && a[l-1]<L) || l>r)break;
	}
	int t=l;
	l=0,r=n;
	while(1){
		mid=(l+r)/2;
		if(a[mid]<R)
			l=mid;
		else
			r=mid-1;
		if( (l<n-1 && a[l]<=R && a[l+1]>R) || l>r)break;
	}
	ans=(l-t);
	return ans;

}
void solve()
{
	cin>>n;
	f(i,0,n-1)cin>>a[i];
	int q;cin>>q;
	sort(a.begin(),a.end());
	while(q--){
		int l,r;cin>>l>>r;
		cout<<binarysearch(l,r)<<' ';
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}