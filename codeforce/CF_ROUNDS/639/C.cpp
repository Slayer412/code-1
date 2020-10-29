#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll n;cin>>n;
	vll a(n);
	map<ll,int> mp;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
		a[i]=(a[i]+(ll)i+1000000000LL)%n;
		mp[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(!mp[i]){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

