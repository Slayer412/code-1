#include<iostream>
#include<set>
using namespace std;
#define ll long long

void solve()
{
	set < ll >s;
	int n,x;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		s.insert(x);
	}
	if(s.size()==n)
	cout<<"YES";
	else cout<<"NO";
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

