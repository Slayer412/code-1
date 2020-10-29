#include<iostream>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long

void solve()
{
	int n,ele;cin>>n;
	set <int > s;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		s.insert(ele);
	}
	auto itr=s.begin();
	if(n==1 || s.size()==1)
	cout<<"NO";
	else
	++(itr),cout<<*itr<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

