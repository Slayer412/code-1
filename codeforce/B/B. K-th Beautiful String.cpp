#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	int b1,b2;
	int x=1,y=2,left=1,right=1;
	int cnt=n-1;
	while(cnt){
		if(k>=left && k<=right){
			b1=cnt;
			b2=n-(k-left);
			break;
		}
		--cnt;
		left+=x;
		right+=y;
		++x,++y;
	}
	for(int i=1;i<=n;i++){
		if(i==b1 || i==b2)
		cout<<'b';
		else
		cout<<'a';
	}
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

