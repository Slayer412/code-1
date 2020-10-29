#include<iostream>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long

void solve()
{
	int n,ele;cin>>n;
	set <int > s(n);
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		s.insert(ele);
	}
	cout<<s[1]<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

