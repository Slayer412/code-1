#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	int cnt=0;
	/*int mx=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		cnt=0;
		else
		{
			cnt++;
			mx=max(cnt,mx);
		}
	}
	cout<<mx<<endl;*/
	for(int i=0;i<n;i++)
	if(s[i]=='0')cnt++;
	cout<<cnt<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

