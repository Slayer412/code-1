#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s;cin>>s;
	int arr[27]={0};
	int cnt=0,ch=0;
	for(int i=0;i<s.length();++i)
		++arr[(int)(s[i]-'a')];
	int mx=0;
	for(int i=26;i>=0;--i)
	{
		if(arr[i]){
		cnt=arr[i];ch=i;break;
		}
	}
	while(cnt--)cout<<(char)(ch+'a');
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

