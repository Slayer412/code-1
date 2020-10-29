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
	
	vector< pair<int,pair<int,int> > > a;
	for(int i=1;i<=n;i++){
		int x,y;cin>>x>>y;
		a.push_back({x,{-1,i}});//in
		a.push_back({y,{1,i}});//out
	}
	sort(a.begin(),a.end());
	int in_or_out=0,occupied=0,ind,max_rooms=0;
	vi rooms,ans(n+1);
	
	for(auto it:a){
		in_or_out=it.second.first;
		ind=it.second.second;
		if(in_or_out==1){
			rooms.push_back(ans[ind]);
		}
		else if(occupied==rooms.size()){
			ans[ind]=++max_rooms;
		}
		else{
			ans[ind]=rooms[occupied++];
		}
	}
	cout<<max_rooms<<'\n';
	f(i,1,n)cout<<ans[i]<<" ";
	
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}