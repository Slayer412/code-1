#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
const int mxn=1000001;
void solve()
{
	int n;cin>>n;
	vector< int > hash(mxn),arr(n);
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		++hash[arr[i]];
	}
	int a=0,b=0;
	for(int i=0;i<n;i++)
	if(hash[arr[i]]==1)if(a==0)a=arr[i];else b=arr[i];
	if(a>b)
	cout<<b<<" "<<a;
	else
	cout<<a<<" "<<b;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

