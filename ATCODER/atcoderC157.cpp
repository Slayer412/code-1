#include<iostream>
using namespace std;
#define ll long long

int main()
{
	int n,m;cin>>n>>m;
	int arr[n+1]={0};
	int f=1;
	while(m--)
	{
		int a,b;cin>>a>>b;
		if(arr[a]==0 || arr[a]==b)
		arr[a]=b;
		else
		f=0;
	}
	if(arr[1]==0 || f==0)
	cout<<-1;
	else if(n==1)
	cout<<arr[1];
	else 
	{
		for(int i=1;i<=n;i++)
		cout<<arr[i];
	}
}

