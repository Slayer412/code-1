#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
using namespace std;
void solve()
{
	int n;cin>>n;
	vi odd,even;
	for(int i=1;i<=2*n;i++){
		int x;
		cin>>x;
		if(x%2)
			odd.push_back(x);
		else
			even.pb(x);
	}
	if(odd.size()%2){
		odd.erase(odd.begin());
		even.erase(even.begin());
	}
	else{
		even.erase(even.begin());
		even.erase(even.begin());
	}
	for(int i:odd)cout<<i<<' ';
	cout<<'\n';
	for(int i:even)cout<<i<<" ";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

