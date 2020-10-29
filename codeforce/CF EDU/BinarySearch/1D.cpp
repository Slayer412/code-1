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
void solve()
{
	int n;cin>>n;
	vi a(n);for(int &x:a)cin>>x;
	sort(a.begin(),a.end());
	int q;cin>>q;
	while(q--){
		int L,R;cin>>L>>R;
		int l=0,r=n-1;
		while(a[l]<L || a[r]>R){
			int mid=(l+r)/2;
			if(a[mid]<L)
				l=mid;
			if(a[mid]>R)
				r=mid;
				cout<<l<< " "<<r<<'\n';
		}
		cout<<r-l+1<<'\n';
	}

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}
