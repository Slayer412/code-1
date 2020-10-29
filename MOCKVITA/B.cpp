#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< int > cost[100];
	for(int i=0;i<n;i++){
		int x;cin>>x;
		int a=x%10;x/=10;
		int b=x%10;x/=10;
		int c=x;
		int sum=max(a,max(c,b))*11 + (min(a,min(b,c)))*7;
		if(sum>99){
			int a1=sum%10;sum/=10;
			int b1=sum%10;
			sum=b1*10+a1;
		}
		cost[sum/10].push_back(i+1);
	}
	int ans=0;
	for(auto it:cost){
		int odd=0,ev=0;
		if(it.size()>1){
			for(auto i:it){
				if(i%2)
				++odd;
				else
				++ev;
			}
			ans+=max(odd,ev)-1;
		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}