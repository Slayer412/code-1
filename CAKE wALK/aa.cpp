#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;
	vector <int> arr(n),w(n);
	
	for(int i=0;i<n;i++)
	cin>>arr[i],w[i]=arr[i];
	int mx=-1,l=n-1,r=0;
	sort(w.begin(),w.end());
	int q=n-2;
	int x=1;
	while(w[n-1]==w[q--])
	x++;
	int l1=0,l2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==w[n-1]  && !l1)
		l1=i+1;
		else if(arr[i]==w[n-1] && l1)
		l2=i+1;
	}
	//cout<<x<<" "<<l1<<" "<<l2;
	if(l2-l1>=(n/2))
	cout<<0<<endl;
	else if(l1 && l2 && x>1)
	{
		cout<<n/2-(l2-l1)<<endl;
	}
	else if(x==1)
	{
		cout<<n/2<<endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

