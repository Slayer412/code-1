#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,k,t;cin>>n>>k;
	int r,c;
	vector <int> row(n+1),col(n+1);
	t=k;
	while(t--)
	{
		cin>>r>>c;
		++row[r],++col[c];
	}
	cout<<n-k<<" ";
	int r1=1,c1=1;
	for(int i=1;i<=n-k;i++)
	{	
		while(row[r1])++r1;
		while(col[c1])++c1;
		cout<<r1<<" "<<c1<<" ";
		++r1,++c1;
	}
	cout<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

