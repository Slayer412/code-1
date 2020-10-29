#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n,k;cin>>n>>k;
	char s[100];
	for(int i=0;i<n;i++)
	cin>>s[i];
	int h=0,t=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='H')
		++h;
		else if(s[i]=='T')
		++t;
	}
	for(int i=n-1;;i--)
	{
		if(k==0)
		break;
		k--;
		if(s[i]=='H')
		{
			--h;
			int temp=t;
			t=h;
			h=temp;
			int j=i;
			while(--j)
			{
				if(s[j]=='H')
				s[j]='T';
				else
				s[j]='H';
			}
			
		}
		else
		--t;
	}
	cout<<h<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

