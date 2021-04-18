#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	long double n,h;cin>>n>>h;
	long double Full_area=(h/2.0);
	long double area=(double)Full_area/n;
	f(i,1,n-1){
		long double m=i*2.000000000;
		long double len=sqrt((long double)m*h*area);
		printf("%.13Lf ", len);
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}