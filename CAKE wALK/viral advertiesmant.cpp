#include<iostream>
using namespace std;
#define ll long long

int main()
{
	int t;cin>>t;
	int n=5,like=0;
	while(t--)
	{
		
		like+=n/2;
		n=3*(n/2);
	}
	cout<<like;
}

