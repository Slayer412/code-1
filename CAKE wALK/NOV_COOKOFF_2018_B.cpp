#include<iostream>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	int r=0,g=0,mxr=0,mxg=0,tr=0,tg=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			++r;
			++tr;
			mxg=max(tg,maxg);
			tg=0;
		}
		else
		{
			++g;
			++tg;
			mxr=max(tr.mxr);
			tr=0;
		}
	}
	if(r!=g || (mxr>2 || mxg>2)
	cout<<"no"<<endl;
	else
	cout<<"yes"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

