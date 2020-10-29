#include<iostream>
using namespace std;
#define ll long long
#define INF 1000000000
void solve()
{
	int n;cin>>n;
	ll chef=0,dost=0;
	ll profit=0,loss=1000000000;
	int d1,d2,f=1;
	for(int i=1;i<36;i++)
	{	
		chef+= 1<<(i-1);
		dost+=n;
		ll temp=dost-chef;
		if(temp > profit)
		{	//cout<<temp<<endl;
			profit=temp;
			d1=i;
		}
		else if(temp < loss && temp>0)
		{	cout<<loss<<endl;
			loss=temp;
			d2=i;	
		}

	}
	cout<<d2<<" "<<d1<<endl;

}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

