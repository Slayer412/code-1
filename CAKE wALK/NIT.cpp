#include<iostream>
using namespace std;
#define ll long long
void solve()
{	int f=1;
	int max=-1;
	string s;
	cin>>s;
	ll arr[100]={0};
	for(int i=0;i<s.length();i++)
	{	if(s[i]-'0'>max)
		max=s[i]-'0';
		arr[s[i]-'0']++;
	}
		for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	//cout<<"mAX "<<max<<endl;
	for(int i=0;i<max-1;i++)
	{
		if(arr[i]==1 && (arr[i+1] || arr[i+2]))	
		continue;
		if(arr[i]==0)
		continue;
		else
		{	cout<<"AAF "<<i<<endl;
			f=0;
			break;
		}
	}
	if(f)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

