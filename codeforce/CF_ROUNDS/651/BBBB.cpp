#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< pair<int,int> > odd,even;
	for(int i=1;i<=2*n;i++){
		int x;
		cin>>x;
		if(x%2)
			odd.push_back({x,i});
		else
			even.pb({x,i});
	}
	if(odd.size()%2){
		odd.erase(odd.begin());
		even.erase(even.begin());
	}
	else{
		if(even.size()>odd.size() ){
		even.erase(even.begin());
		even.erase(even.begin());
		}
		else{
			odd.erase(odd.begin());
			odd.erase(odd.begin());
		}
	}
	/*for(auto p:odd)cout<<p.first<<" "<<p.second<<'\n';
	cout<<'\n';
	for(auto p:even)cout<<p.first<<" "<<p.second<<'\n';
	cout<<'\n';*/
	for(int i=1;i<odd.size();i++){
		cout<<odd[i].second<<" "<<odd[i-1].second<<"\n",i++;
	}
	for(int i=1;i<even.size();i++){
		cout<<even[i].second<<" "<<even[i-1].second<<'\n',++i;
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}
