#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mxn=5001;
void solve()
{
	int n;
	cin>>n;
	map < int, pair<int,int> >v;
	int arr[n],l[mxn]={0},r[mxn]={0},f=0,x;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		x=arr[i];
		if(l[x]==0)
		l[x]=i+1;
		else
		r[x]=i+1;
	} 
	for(int i=0;i<n;i++)
	{	
		if(r[arr[i]]-l[arr[i]]>1)
		{	
			f=1;
			break;
		}
	}
	if(f)cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

