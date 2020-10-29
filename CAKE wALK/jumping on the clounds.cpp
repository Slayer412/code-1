#include<iostream>
using namespace std;
#define ll long long
void solve()
{

}
int main()
{	int e=100;
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;)
	{
		i=(i+k)%n;
		if(a[i]==1)
		e-=3;
		else
		e-=1;
		if(i==0)
		break;
	}
	cout<<e;
}

