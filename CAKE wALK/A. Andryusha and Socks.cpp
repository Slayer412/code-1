#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
const int mxn=100000;
void solve()
{
	int n;cin>>n;
	vector <int> v(n+1);
	int mx=0,t=0,x;
	for(int i=0;i<2*n;i++)
	{
		cin>>x;
		if(!v[x])
		++v[x],++t;
		else
		{
			mx=max(t,mx);
			--t;
		}
	}
	cout<<mx;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

