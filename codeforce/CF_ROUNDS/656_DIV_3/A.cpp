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
	int x,y,z;cin>>x>>y>>z;
	if(x==y){
		if(x >= z)
		cout<<"YES\n",cout<<x<<" "<<z<<" "<<z<<'\n';
		else
		cout<<"NO\n";
		
	}
	else if(y==z){
		if(y>=x)
		cout<<"YES\n",cout<<x<<" "<<max(1,x-1)<<" "<<y<<'\n';
		else
		cout<<"NO\n";
	}
	else if(z==x){
		if(x>=y){
			cout<<"YES\n";
			cout<<y<<" "<<x<<" "<<max(1,y-1)<<'\n';
		}
		else
		cout<<"NO\n";
	}
	else
	cout<<"NO\n";


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}