#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,x;cin>>n>>x;
	int ele;
	int odd=0,even=0;
	for(int i=0;i<n;i++){
		cin>>ele;
		if(ele%2)
		++odd;
	}
	even=n-odd;
	int ok=0;
	for(int i=1;i<=min(odd,x);i+=2){
		if((x-i)<=even && (x-i)>=0){
			ok=1;
			break;
		}
	}
	if(ok)cout<<"Yes\n";
	else
	cout<<"No\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}