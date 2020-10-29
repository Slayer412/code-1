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
	vi a(n);
	int odd=0,even=0;
	for(int &x:a){
		cin>>x;
		if(x%2)
		odd++;
		else
		even++;
	}
	if(odd && even){
		sort(a.begin(),a.end());
		for(int i:a)cout<<i<<' ';
	}
	else{
		for(int i:a)cout<<i<<' ';
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}