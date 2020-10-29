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
	int n,q;cin>>n>>q;
	vi a(n+1),b(n+1);
	vll ea(n+1),oa(n+1),ob(n+1),eb(n+1);
	f(i,1,n){
		cin>>a[i];
		if(i==1)
			oa[i]=a[i];
		else if(i%2){
			oa[i]=oa[i-2]+a[i];
			
		}
		else
			ea[i]=ea[i-2]+a[i];
	}
	f(i,1,n){
		cin>>b[i];
		if(i==1)
			ob[i]=b[i];
		else if(i%2){
			ob[i]=ob[i-2]+b[i];
		}
		else
			eb[i]=eb[i-2]+b[i];
	}
	while(q--){
		int t,l,r;cin>>t>>l>>r;
		ll sum=0;
		if(t==1){
			if(l%2){
				
				int dr=r;
				if(oa[r]==0)--dr;

				sum=oa[dr]-oa[max(l-2,0)];
				dr=r;
				if(eb[r]==0){
					--dr;
				}
				sum+=(eb[dr]-eb[l-1]);
			}
			else{
				int dr=r;
				if(ea[r]==0)--dr;
				sum=ea[dr]-ea[max(l-2,0)];
				dr=r;
				if(ob[r]==0)--dr;
				sum+=(ob[dr]-ob[l-1]);
			}
			cout<<sum<<'\n';
		}
		else{
			if(l%2){
				
				int dr=r;
				if(ob[r]==0)--dr;

				sum=ob[dr]-ob[max(l-2,0)];
				dr=r;
				if(eb[r]==0){
					--dr;
				}
				sum+=(ea[dr]-ea[l-1]);
			}
			else{
				int dr=r;
				if(ea[r]==0)--dr;
				sum=eb[dr]-eb[max(l-2,0)];
				dr=r;
				if(oa[r]==0)--dr;
				sum+=(oa[dr]-oa[l-1]);
			}
			cout<<sum<<'\n';
		}
	}

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}