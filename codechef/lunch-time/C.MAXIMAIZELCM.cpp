#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn=10005;
vector < int > primefactors[mxn];
ll power(int a, unsigned int y) 
{ 
	ll res = 1;	 
	ll x=a;
	while (y > 0) 
	{ 
		 
		if (y & 1) 
			res = res*x;  
		y = y>>1; 
		x = x*x; 
	} 
	return res; 
}

void solve()
{
	int n,m;cin>>n>>m;
	int arr[n];
	int mxpf[mxn]={0};
	
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{	
		for(int j=2;j*j<=arr[i];++j)
		{	int cnt=0;
			while(arr[i]%j==0)
			{
				++cnt;
				arr[i]/=j;	
			}
			mxpf[j]=max(mxpf[j],cnt);
			if(arr[i]==1)
			break;
		}
		if(arr[i]!=1)
		mxpf[arr[i]]=max(mxpf[arr[i]],1);	
	}
	int ans=1,ele;
	ll mx=1;
	for(int i=2;i<=m;i++)
	{	ll lcm=1;
		ele=i;
		for(int j=2;j*j<=i;j++)
		{	int powercnt=0;
			while(ele%j==0)
			{
				++powercnt;
				ele/=j;
			}
			if(powercnt>mxpf[j])
			{
				lcm=lcm*power(j,max(0,powercnt-mxpf[i]));
			}
		}
		if(ele!=1 && mxpf[i]==0)
		lcm*=ele;
		if(lcm>mx)
		{
			mx=lcm;
			ans=i;
		}
	}
	cout<<ans<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

