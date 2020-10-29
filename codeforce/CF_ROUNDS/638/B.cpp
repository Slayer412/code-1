#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	int ele;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>ele;
		s.insert(ele);
	}
	if(s.size()>k)
	cout<<-1<<'\n';
	else{
		cout<<n*k<<"\n";
		for(int j=0;j<n;j++){
		for(auto i: s)
		cout<<i<<' ';
		for(int i=0;i<(k-(int)s.size());i++)
		cout<<1<<' ';
		}
		cout<<endl;
		
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}
