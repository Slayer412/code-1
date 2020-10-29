#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
		int n,x,a,b;cin>>n>>x>>a>>b;
		if(a>b)
		swap(a,b);
		int dist=0;
		if(a-x>0){
			a=a-x;
			x=0;
		}	
		else{
		x-=(a-1);
		a=1;
		
		}
		if(x){
			if(b+x<=n )
				b+=x;
			else
				b=n;
		}
		cout<<b-a<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}