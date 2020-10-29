#include<iostream>
using namespace std;
#define ll long long
void solve()
{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	if(c>d)
	{
		int t;
		double t1;
		t=(b-a)/(c-d);
		t1=(double)(b-a)/(c-d);
		if(t==t1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else if(d>c)
	{
		int t;
		double t1;
		t=(b-a)/(d-c);
		t1=(double)(b-a)/(d-c);
		if(t==t1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else if(d==c && a!=b)
	cout<<"NO"<<endl;
	else if(a==b)
	cout<<"YES"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

