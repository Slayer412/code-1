#include<iostream>
#include<math.h>
using namespace std;
#define ll long long 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int price,quantity,discount;
		double sum=0.0,p1=0.0;
		for(int i=0;i<n;i++)
		{
			cin>>price>>quantity>>discount;
			p1=price+ price*((double)discount/100);
		//	cout<<p1<<endl;
			p1=p1-p1*((double)discount/100);
		//	cout<<p1<<endl;
			sum+=(double)(price-p1)*quantity;
		}
	    cout.precision(17);
		cout<<sum<<endl;
	}
}
