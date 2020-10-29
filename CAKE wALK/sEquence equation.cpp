#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	vector<int> p(n+1);
	vector<int> ans;
	for(int i=1;i<=n;i++)
	cin>>p[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;++j)
			{
				if(p[j]==i)
				{	
					for(int  k=1;k<=n;++k)
					{
						if(p[k]==j)
						ans.push_back(k);
					}
				}	
			}	
	}
	for(int i:ans)
	cout<<i<<endl;
}
