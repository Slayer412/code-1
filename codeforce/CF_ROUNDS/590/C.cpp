#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string p[2];cin>>p[0]>>p[1];
	int row=0,i;
	for(i=0;i<n;++i)
	{
		if(p[row][i]>='3')
		{
			if(p[row^1][i]<'3')
			break;
			else
			row^=1;
		}
	}
	if(row==1 && i==n)
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