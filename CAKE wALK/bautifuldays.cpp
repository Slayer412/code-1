#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

int main()
{
	int l,r,k,cnt=0;
	cin>>l>>r>>k;
	for(int i=l;i<=r;++i)
	{
		int temp=0,t=i;
		while(t>0)
		{	
			temp=t%10+temp*10; 
			t/=10;
		}
		if(!(abs(temp-i)%k))
		cnt++;
		
	}
	cout<<cnt;
}
