#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
string s;
void solve()
{	
	int n;cin>>n;
	cin>>s;
	int l,r,fl=0,fr=0,ans=0;
	for(l=0,r=n-1;l<r;++l,--r)
	{
		if(s[l]==s[r])
		{
			fr=fl=0;
			continue;
		}
		if(l+1==r)
		{
		cout<<"NO"<<endl;
		return;
		}
		if(!fl && s[l+1]==s[r])
		{
			swap(s[l],s[l+1]);
			fl=1;
			fr=0;
			++ans;
		}
		else if(!fr && s[l]==s[r-1])
		{
			swap(s[r-1],s[r]);
			fr=1;
			fl=0;
			++ans;
		}
		else
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl<<ans<<endl;	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

