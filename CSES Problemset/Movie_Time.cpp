#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define F first
#define S second
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< pair<ll,ll> >time;
	f(i,1,n){
		ll a,b;
		cin>>a>>b;
		time.push_back({b,a});
	}
	sort(time.begin(),time.end());
	for(int i=0;i<n;i++){
		swap(time[i].F,time[i].S);
	}
	//for(auto i:time)cout<<i.F<<" "<<i.S<<'\n';
	int cnt=1;
	pair<int,int> last={time[0].F,time[0].S};
	f(i,1,n-1){
		if(time[i].F>=last.S)
		last=time[i],++cnt;
	}
	cout<<cnt<<'\n';
	
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}