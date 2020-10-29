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
	string a,b;cin>>a>>b;
	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());
	int i=0,j=n-1;
	int S=0,M=0;
	while(i<n && j>=0){
		if(a[i]<b[j]){
			++i,--j,++S;
		}
		else{
			--j;
		}
	}
	i=0,j=n-1;
	while(i<n && j>=0){
		if(a[j]<=b[i]){
			++i,--j;
		}
		else{
			++M,--j;
		}
	}
	cout<<M<<"\n"<<S<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}