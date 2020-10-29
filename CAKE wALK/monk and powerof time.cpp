#include<iostream>
#include<math.h>
#include<vector>
#define ll long long 
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector < int >arr(n+1);
	int  p[n+1];
	p[0]=0;
	int ans=0,sum=0;
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	for(int i=1;i<=n;++i)
	cin>>p[i];
	auto itr=arr.begin();
	auto it=arr.end()-1;
	for(int i=1;i<=n;i++)
	{	
		while(arr[i]!=p[i])
		{
			arr.insert(itr,*it);
			arr.erase(it);
			--it;
			ans++;
		}
		sum+=ans;
		itr++;
	}
	cout<<sum<<endl;
}




