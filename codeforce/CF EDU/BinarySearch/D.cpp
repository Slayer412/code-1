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
	l=0,r=n-1;
	if(a[0]>R || a[n-1]<L)
		return 0;
	while(l+1<r){
		mid=(l+r)/2;
		if(a[mid]<=R)l=mid;
		else
			r=mid;
	}
	int ans=0;
	if(a[r]<=R)ans=r;
	else if(a[l]<=R && a[l+1]>R)ans=l;
	l=0,r=n-1;
	while(l+1<r){
		mid=(l+r)/2;
		if(a[mid]<L)l=mid;
		else
			r=mid;
	}
//	cout<<l<<" "<<mid<<" "<<r<<'\n';
	if(a[r]<L){
		if(r){
			ans=ans-r;
		}
	}
	else if(l==0){
		if(a[l]>=L)ans+=1;
	}
	else if(a[l]<=L){
		if(a[l]==L){
			ans=ans-l+1;
		}
		else
			ans=ans-l;

	}

	return ans;
}
void solve()
{
	cin>>n;
	a.resize(n);
	f(i,0,n-1)cin>>a[i];
	int q;cin>>q;
	sort(a.begin(),a.end());
	while(q--){
		int l,r;cin>>l>>r;
		cout<<binarysearch(l,r)<<'\n';
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}