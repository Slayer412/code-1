#include<iostream>
using namespace std;
#define ll long long
int is_prime(int n)
{
	for(int i=2;i*i<=n;++i)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	 vector< int >v (1000001);
	 int ans[10000001]={0};
	 for(int i=2;i<1000001;i++)
	 {
	 	if(is_prime(i))
	 	ans[i]=ans[i-1]+1;
	 	else
	 	ans[i]=ans[i-1];
	 } 
	 int l,r;cin>>l>>r;
	 cout<<ans[r]-ans[l-1]<<endl;
}

