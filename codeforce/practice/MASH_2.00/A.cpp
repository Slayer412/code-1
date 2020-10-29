#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{	
		ll a,b;cin>>a>>b;
		if(a%2==0){
			if(b>(a+1)/2){
				cout<<(b-(a/2))*2;
			}
			else
				cout<<b*2LL-1;
		}
		else{
			if(b>(a+1)/2){
				cout<<(b-(a+1)/2)*2;
			}
			else
				cout<<b*2LL-1LL;
		}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}