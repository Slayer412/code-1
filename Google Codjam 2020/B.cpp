#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	string ans[n];
	int inx=0,i;
	for(i=0;i<n-1;i++){
		int temp=s[i]-'0';
		if(s[i]==s[i+1])
		{	string a="";
			++i;
			int ii=i-1;
			while(s[i]==s[i+1] && i<n-1)i++;
			int cnt=i-ii+1;
			while(cnt--)a=a+s[i];
			while(temp--)
			a='('+a;
			temp=s[i]-'0';
			while(temp--)
			a=a+')';
			ans[inx++]=a;
		}
		else if(s[i]!='0')
		{	string a="";
			while(temp--)
			a='('+a;
			temp=s[i]-'0';
			a=a+s[i];
			while(temp--)
			a=a+')';
			ans[inx++]=a;
		}
		if(s[i]=='0')
		ans[inx++]="0";
		
	}
	if(s[i]!=s[i-1] && i<n)
        {
        	string a="";
        	int temp=s[i]-'0';
        	while(temp--)
        	a='('+a;
        	temp=s[i]-'0';
        	a+=s[i];
        	while(temp--)
        	a=a+')';
        	if(s[i]=='0')
        	ans[inx++]='0';
        	else
        	ans[inx++]=a;
        }
	for(string s:ans)
	cout<<s;
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<"#"<<i<<": ";
        solve();
    }
}
