#include <iostream>
using namespace std;
int isprime(long long int n)
{
	if(n<=1)
	return 0;
	else
	if(n<=3)
	return 1;
	if(n%2==0 || n%3==0)
	return 0;
		for(long int i=5;i*i<=n;i+=6)
			if(n%i==0 || n%(i+2)==0)
			return 0;
		return 1;
}
int main() {
		int t;cin>>t;
		while(t--)
		{
			long long int start,end;
			cin>>start>>end;
			for(int i=start;i<=end;i++)
			{
				if(isprime(i))
				cout<<i<<endl;
			}
			cout<<endl;

		}
	return 0;
}
