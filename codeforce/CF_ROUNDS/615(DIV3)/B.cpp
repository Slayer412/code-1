#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{	int n;cin>>n;
	vector<pair<int,int> > a(n);
	for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
	sort(a.begin(),a.end());
	string ans="";
	if(n==1){
		
		while(a[0].first--)
		ans+='R';
		while(a[0].second--)
		ans+='U';
		cout<<"YES\n"<<ans<<'\n';
		return;
	}
	for(int i=0;i<n;i++){
		if(a[i].second>a[i+1].second && i<n-1){
			cout<<"NO\n";
			return;
		}
		else{
			int k;
			if(i==0)
			k=a[i].first;
			else
			k=a[i].first-a[i-1].first;
			while(k--)
			ans+='R';
			if(i==0)
			k=a[i].second;
			else
			k=a[i].second-a[i-1].second;
			while(k--)
			ans+='U';
		}
	}
	cout<<"YES\n"<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

