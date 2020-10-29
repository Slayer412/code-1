#include<iostream>
#include<set>
using namespace std;
#define ll long long

void solve()
{
	int r1,r2,s1,s2;
	
	set <int> rt,rd;
	int x,f=1;
	cin>>r1;
	for(int i=0;i<r1;i++)
	{
		cin>>x;
		rt.insert(x);
	}
	cin>>r2;
	for(int i=0;i<r2;i++)
	{
		cin>>x;
		rd.insert(x);
	}
	cin>>s1;
	for(int i=0;i<s1;i++)
	{
		cin>>x;
		if(!rt.count(x))
			f=0;
	}
	cin>>s2;
	for(int i=0;i<s2;i++)
	{
		cin>>x;
		if(!rd.count(x)) 
			f=0;
	}
	if(f)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

