#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;
	int arr[n];
	int XOR;
	for(int i=0;i<=2*n;i++)
	{
		cin>>arr[i];
		if(i==0)
		XOR=arr[i];
		else
		XOR^=arr[i];
	}
	cout<<XOR<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

