#include<iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
	int n;cin>>n;
	int arr[n][n];
	char c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>c;
			if(c=='o')
			arr[i][j]=1;
			else
			arr[i][j]=0;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{
			if(i>0 && arr[i-1][j])cnt++;
			if(j>0 && arr[i][j-1])cnt++;
			if(i<n-1 && arr[i+1][j])cnt++;
			if(j<n-1 && arr[i][j+1])cnt++;
		
				if(cnt%2)
				{
					cout<<"NO"<<endl;
					return;
				}
		}
	}
	cout<<"YES"<<endl;
}
int main()
{
	
	solve();
}

