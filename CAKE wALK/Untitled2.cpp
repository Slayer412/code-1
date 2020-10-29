#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	string s;
	cin>>s;
	int len=s.length();
	if(s[len-1]=='o' && s[len-2]=='p')
	cout<<"FILIPINO"<<endl;
	else if(s[len-1]=='u' && s[len-2]=='s' && s[len-3]=='a' && s[len-4]=='m') || s[len-1]=='u' && s[len-2]=='s' && s[len-3]=='e' && s[len-4]=='d' )
	cout<<"JAPANESE"<<endl;
	else if(s[len-1]=='a' && s[len-2]=='d' && s[len-3]=='i' && s[len-4]=='n' && s[len-4]=='m')
	cout<<"KOREAN"<<Endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

