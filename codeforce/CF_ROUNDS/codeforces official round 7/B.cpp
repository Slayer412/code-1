#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n);
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]+=sum;
		sum=max(sum,a[i]);
		cout<<a[i]<<' ';
	}		
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}