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
	ll cur=n/2;
	ll now=n;
	cout<<cur<<'\n';
	char c,prevc='1';
	while(c!='E'){
		cin>>c;
		//cout<<cur<<'\n';
		if(prevc=='1'){
			prevc=c;
			cout<<cur<<'\n';
		}
		else if(prevc==c){
			if(c=='L'){
				now=cur;
				cur/=2;
				cout<<cur<<'\n';
				prevc='1';
			}
			else{
				cur+=max(1LL,(now-cur)/2);
				cur=min(n,cur);
				cout<<cur<<'\n';
				prevc='1';
			}
		}
		else{
			prevc='1';
			if(c=='L'){
				now=cur;
				cur/=2;
				cout<<cur<<'\n';
			}
			else{
				cur+=max(1LL,(now-cur)/2);
				cur=min(n,cur);
				cout<<cur<<'\n';
			}
		}
	}

		
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}
