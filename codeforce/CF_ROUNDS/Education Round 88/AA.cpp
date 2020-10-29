#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
		int n,m,k;
		cin>>n>>m>>k;
		if(m==0){
			cout<<0<<'\n';
			return;
		}
		else{
			if(m>(n/k)){
				int ans=(n/k);
				m-=ans;
				int a=ceil((double)(m)/(k-1));
				cout<<ans-a<<'\n';
			}
			else
			cout<<m<<'\n';
		}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}