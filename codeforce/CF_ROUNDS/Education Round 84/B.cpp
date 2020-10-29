#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	set<int>vis;
	for(int i=1;i<=n;i++)
	vis.insert(i);
	vector<int> adj[n+1];
	int k,val;
	for(int i=1;i<=n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>val;
			adj[i].push_back(val);
		}
	}
	int girls[n+1]={0};
	vi find;
	for(int i=1;i<=n;i++){
		for(int x:adj[i]){
			if(vis.count(x)){
				vis.erase(x);
				girls[i]=1;
				break;
			}
		}
		if(girls[i]==0){
		find.push_back(i);
		}
	}
	if(find.empty())
	cout<<"OPTIMAL\n";
	else{
		cout<<"IMPROVE\n";
		cout<<find[0]<<" "<<*vis.begin()<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}