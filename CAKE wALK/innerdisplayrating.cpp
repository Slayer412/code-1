#include<iostream>
using namespace std;
#define ll long long

int main()
{
	int n,dv,ans;
	cin>>n>>dv;
	if(n<10)
	{
		cout<<dv+100*(10-n);
	}
	else
	cout<<dv;
}

