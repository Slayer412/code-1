#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	int n,m,k;cin>>n>>m>>k;
	vector <int>v[n];
	while(m--)
	{	int a,b;cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cout<<(m-k);

}

