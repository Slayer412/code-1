#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int H,n;cin>>H>>n;
	int x;
	int sum=0;
	for(int i=0;i<n;i++)
	cin>>x,sum+=x;
	if(sum<H)
	cout<<"No";
	else
	cout<<"Yes";
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

