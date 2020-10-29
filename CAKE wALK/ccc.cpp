#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int l;cin>>l;
	double ans=(double)l/3;
	float ans1=ans*ans*ans;
	cout.precision(10);
	printf("%.10f",ans1);
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

