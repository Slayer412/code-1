#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vector<int> a(2*n);
	ll curr=0;
	ll diff=0;
	map<int,int> diffr;
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	curr=0;
	diff=count(a.begin(),a.end(),1)-count(a.begin(),a.end(),2);
	//cout<<"DIFF "<<diff<<'\n';
	if(diff==0)
	{
		cout<<0<<'\n';
		return;
	}
	diffr[0]=0;
	for(int i=n;i<2*n;i++){
		if(a[i]==1)
		++curr;
		else
		--curr;
		if(!(diffr.count(curr))){
			diffr[curr]=i-(n-1);
		}
	}
	ll ans=2*n;
	curr=0;
	for(int i=n-1;i>=0;--i){
		if(a[i]==1)
		++curr;
		else
		--curr;
		if(diffr.count(diff-curr)){
			ans=min(ans,(ll)(n-i+diffr[diff-curr]));
		}
	}
	if(diffr.count(diff)){
		ans=min(ans,(ll)diffr[diff]);
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}