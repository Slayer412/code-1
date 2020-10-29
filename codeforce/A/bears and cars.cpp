#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int f,m,s,masha;
	cin>>f>>m>>s>>masha;
	int ok=1;
	if(s<masha && 2*s<masha)
	ok=0;
	if(ok)
	cout<<f<<'\n'<<m<<'\n'<<s<<'\n';
	else
	cout<<-1<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

