#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	
	int q,x;cin>>q>>x;
	vi a(x);
	set< pair<int,int> > vals;
	for(int i=0;i<x;i++){
		vals.insert(make_pair(0,i));
	}
	for(int i=0;i<q;i++){
		int curr;cin>>curr;
		curr=curr%x;
		vals.erase(make_pair(a[curr],curr));
		++a[curr];
		vals.insert(make_pair(a[curr],curr));
		cout<< vals.begin()->first* x + vals.begin()->second<<'\n';
	}
	
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

