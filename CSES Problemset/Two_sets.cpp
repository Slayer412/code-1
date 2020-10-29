#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	ll sum=(n*(1+n))/2;
	if(n==3){
		cout<<"YES\n";
		cout<<1<<"\n";
		cout<<3<<"\n";
		cout<<2<<'\n';
		cout<<1<<" "<<2<<'\n';
		return;
	}
	if(sum%2){
		cout<<"NO\n";
		return;
	}
		set<int> s1,s2;
		ll setsum=sum/2;
		ll insum=0;
		int vis[n+1]={0};
		s1.insert(n);
		vis[n]=1;
		insum+=n;
		for(int i=n-1;i>0;--i){
			if(setsum-insum<n && setsum-insum>0 && vis[setsum-insum]==0) {
				s1.insert(setsum-insum);
				vis[setsum-insum]=1;
				break;
			}
			s1.insert(i);
			vis[i]=1;
			insum+=(ll)i;
		}	
		f(i,1,n)if(!vis[i])s2.insert(i);
		cout<<"YES\n";
		cout<<s1.size()<<'\n';
		for(auto i:s1)cout<<i<<" ";
		cout<<'\n';
		cout<<s2.size()<<'\n';
		for(auto i:s2)cout<<i<<" ";
		cout<<'\n';

}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}