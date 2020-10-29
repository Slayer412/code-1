#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,s;
	cin>>n>>s;
	if(s/2<n){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
		for(int i=1;i<n;i++)
		cout<<1<<" ";
		cout<<(s-n+1)<<'\n';
		cout<<s/2<<'\n';
	}
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}