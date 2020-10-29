#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll n,H;cin>>n>>H;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int x;
	int temp=-1;
	for(int i=0;;)
	{	
		cin>>x;
		if((temp==3 && x==3 )|| (temp==4 && x==4))
		continue;
		else
		temp=x;
		
		if(x==1)
		{
			if(i==0)
			continue;
			else
			i--;
		}
		else if(x==2)
		{
			if(i==n-1)
			continue;
			else
			i++;
		}
		else if(x==3)
		{
			if(arr[i]==0)
			continue;
			else
			arr[i]--;
		}
		else if(x==4)
		{
			if(arr[i]==H)
			continue;
			else
			arr[i]++;
		}
		else
		break;
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

