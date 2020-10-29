#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
void solve()
{	
	int n,m;cin>>n>>m;
	if(gcd(n,m)==1)
	cout<<"finite\n";
	else
	cout<<"infinite\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

