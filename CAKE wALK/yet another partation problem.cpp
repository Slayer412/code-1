#include<iostream>
using namespace std;
#define ll long long
#define scan(arr) for(int i=0;i<n;i++)cin>>arr[i];
#define FOR(i,n) for(int i=0;i<n;i++)
void solve()
{	
	int n;cin>>n;
	int arr[n];
	int XOR,X[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i==0){
		XOR=arr[i];
		X[i]=XOR;
		}
		else
		{
			XOR=XOR^arr[i];
			X[i]=XOR;
		}
	}
	int MAX = XOR;
	for( int i = 0; i < n-1; i++)
	{
	int A = X[i];
	int B = (XOR ^ A);
	int C = A & B;
	// cout << "C = " << C << "\n";
	if(MAX < C && XOR < C)
	{
	MAX = C;
	}
	}
	if( MAX == -1)
	cout << arr[0] << "\n";
	else
	cout << MAX << "\n";
		
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

