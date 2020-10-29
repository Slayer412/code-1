#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;
	int arr[5]={0};
	string s;cin>>s;
	int l=0,r=0,u=0,d=0;
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			x++;
			while(s[i]=='R' || s[i]=='L')i++;
		}
		if(s[i]=='L')
		{
			--x;
			while(s[i]=='R' || s[i]=='L')i++;
		}
		if(s[i]=='U')
		{
			++y;
			while(s[i]=='U' || s[i]=='D')i++;
		}
		if(s[i]=='D')
		{
			--y;
			while(s[i]=='U' || s[i]=='D')i++;
		}
		--i;
	}
	cout<<x<<" "<<y<<endl;
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

