#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
void solve()
{
	int n,m;
	cin>>m>>n;
	int arr[n+1],p[m+1],temp[n+1];
	int hash[1001]={0},f=1,cnt=0;
	arr[0]=temp[0]=p[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		temp[i]=arr[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>p[i];
		hash[p[i]]++;
	}
	sort(temp,temp+n+1);
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==temp[i])
		continue;
		else
		{	cout<<"in else"<<endl;
			if(hash[i] || hash[i-1])
			cnt++;
			else
			{
				f=0;
				break;
			}
			if(cnt>=n/2){
			f=0;
			break;
			}
		}
	}
	if(f)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

