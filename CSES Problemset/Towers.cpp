#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vector<int> tower;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		auto itr=upper_bound(tower.begin(),tower.end(),x);
		if(itr==tower.end()){
			tower.push_back(x);
		}
		else{
			*itr=x;
		}
	}
	cout<<tower.size();
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}