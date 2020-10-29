#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	int p1=c-d,p2=c+d;
	//nt f=0;
	if((a-b)*n>p2 || (a+b)*n<p1)
	cout<<"No\n";
	else
	cout<<"Yes\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}