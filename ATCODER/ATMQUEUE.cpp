#include<iostream>
using namespace std;
#define ll long long

int main()
{
	int n,g=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		g++;
	}
	cout<<g<<endl;
}

