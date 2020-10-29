#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll k;
	int d1,d2;
	cin>>k>>d1>>d2;
	ll sum=(d1+d2);
	int arr[4]={6,8,12,20};
	int i=2;
	if(sum==10)
	cout<<"NO\n";	
	else if(k<10)
	{	k-=2;
		while(k--)
		{
			sum+=(sum%10);
		}
		//cout<<sum<<"\n";
		if(sum%3==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	else
	{
	while(1 && i<k)
	{	
		if(sum%10==6 || sum%10==0)
		break;
		sum+=(sum)%10;
		++i;
	}
	if(sum%10==0)
	{
		cout<<"NO\n";
	}
	else
	{
	ll ans=(k-i)-((k-i)/4)*4;
	if(ans==0)
	ans=sum+((k-i)/4)*20;
	else if(ans==1)
	ans=sum+((k-i)/4)*20+6;
	else if(ans==2)
	ans=sum+((k-i)/4)*20+8;
	else if(ans==3)
	ans=sum+((k-i)/4)*20+12;
	
	if(ans%3==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

