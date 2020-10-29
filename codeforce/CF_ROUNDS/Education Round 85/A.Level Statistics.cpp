#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{	int n;cin>>n;
	int x,y,p=0,c=0;
	bool ok=true;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if( x < p || y<c || x-p < y-c )
		ok=false;
		p=x,c=y;
	}
	if(ok)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

