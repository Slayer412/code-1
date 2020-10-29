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
map<int,int> pf;
void solve()
	{
		ll n,x,y;cin>>n>>x>>y;
		if(y-x==n-1){
			f(i,x,y)cout<<i<<" ";
			cout<<'\n';
			return;
		}
		else{
			if((y-x)%(n-1)==0){
				int cnt=0;
				ll t=(y-x)/(n-1);
				ll a=x-t;
				while(cnt<n &&  x<=y){
					cout<<x<<" ";
					++cnt;
					x+=t;
					
				}
				while(a>0 && cnt<n){
					cout<<a<<" ";
					a-=t;
					++cnt;
				}
				x=y+t;
				while(cnt<n){
					cout<<y<<" ";
					y+=t;
					++cnt;
				}

				
			}
			else{
				ll t=(y-x);
				ll tt=1;
				for(int i=n-2;i>=1;i--){
					if((y-x)%i==0){
						tt=(y-x)/i;break;
					}
				}
				t=x;
				int cnt=0;
				t=x;
				while(cnt<n && t<=y){
					cout<<t<<" ";
					t+=tt;
					++cnt;
				}
				t=x-tt;
				while(t>0 && cnt<n){
					cout<<t<<" ";
					t-=tt;
					++cnt;
				}
				t=y+tt;
				while(cnt<n){
					cout<<t<<" ";
					t+=tt;
					++cnt;
				}

			}

		}
		
		cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}