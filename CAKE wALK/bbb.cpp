#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	string s;
	cin>>s;
	int len=s.length();
	int  flag=0;
	for(int i=0;i < len ;i++){
        if(s[i] != s[len-i-1]){
            flag = 1;
            break;
   		}
   	}
   	len=(len-1)/2;
   	for(int i=0;i<len;i++)
   	{
   		if(s[i] != s[len-i-1]){
            flag = 1;
            break;
   		}
   	}
   	len=s.length();
   	for(int i=((len+3)/2)-1;i<len;i++)
   	{
   		if(s[i] != s[len-i-1]){
            flag = 1;
            break;
   		}
   	}
   	if(!flag)
   	cout<<"Yes";
   	else cout<<"No";
   	
   	
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

