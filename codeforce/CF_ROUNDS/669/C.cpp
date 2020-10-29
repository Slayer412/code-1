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
	vi ans(n+1,0);
	int x=1,y=2;
	int len=0;
	if(n==1){
		cout<<"! "<<1<<endl;
		return;
	}
	while(len!=n-1){

		cout<<"? "<<x<<" "<<y<<endl;
		int p1;cin>>p1;
		cout<<"? "<<y<<" "<<x<<endl;
		int p2;cin>>p2;
		if(p1<p2){
			swap(p1,p2);
			swap(x,y);
		}
		ans[x]=p1;
		len++;
		for (int i = 1; i<=n; ++i)
		{
			if(ans[i]==0 && y!=i)x=i;
		}
	}
	ans[y]=n;
	cout<<"! ";
	f(i,1,n)cout<<ans[i]<<" ";
	cout<<endl;

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}