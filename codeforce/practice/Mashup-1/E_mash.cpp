#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void findTwoGroup(ll n) 
{ 
   vi ans;
   ll sum=(n*(n+1))/2;
   ll s=0;
   int totaldiff=0;
   for(int i=n;i>=0;--i){
   		if(sum-i > s+i)
   		ans.push_back(i),sum-=i,s+=i;
   		else{
   			int diff=sum-s;
   			if(diff/2>0)
   			ans.push_back(diff/2);
   			else
   			ans.push_back(diff);
   			if(diff%2)
   			totaldiff=1;
   			break;
   		}
   }
   cout<<totaldiff<<'\n';
   cout<<ans.size()<<" ";
   for(auto it:ans)cout<<it<<" ";
} 
void solve()
{
	 ll n;cin>>n;
	if(n==2){
		cout<<1<<"\n";
		cout<<1<<" "<<1<<'\n';
		return;
	}
	findTwoGroup(n);
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}