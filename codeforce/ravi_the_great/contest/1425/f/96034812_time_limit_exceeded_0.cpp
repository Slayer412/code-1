#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int cnt=0;
	vi a(n+1);
	int l=1,r=3;
	int f=0;
	if(n==3){
		cout<<"? "<<1<<" "<<3<<endl;
		int x;cin>>x;
		cout<<"? "<<2<<" "<<3<<endl;
		int y;cin>>y;
		cout<<"? "<<1<<" "<<2<<endl;
		int z;cin>>z;
		int one=x-y;
		int two=z-one;
		int three=y-two;
		cout<<"! "<<one<<" "<<two<<" "<<three<<endl;
		return;
	}
	while(1){
		if(!f){
		cout<<"? "<<l<<" "<<r<<endl;
		int x;cin>>x;
		cout<<"? "<<l<<" "<<l+1<<endl;
		int xx;cin>>xx;
		cout<<"? "<<l+1<<" "<<r<<endl;
		int y;cin>>y;
		cout<<"? "<<l+1<<" "<<r+1<<endl;
		int z;cin>>z;
		a[l+2]=x-xx;
		a[l+1]=y-a[l+2];
		a[l]=xx-a[l+1];
		a[l+3]=z-y;
		f=1;
		l=r+1;
		}
		else if(l<n){
			cout<<"? "<<l<<" "<<l+1<<endl;
			int x;cin>>x;
			a[l+1]=x-a[l];
			if(l+1==n)
				break;
		}
		else
			break;
	}
	cout<<"! ";
	f(i,1,n)cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}