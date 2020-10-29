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
	int swap=0;
	f(i,0,n-1){
	cin>>a[i];
	a[i]=a[i]%2;
	if(i%2!=a[i]%2)swap++;
	if(a[i]==0)
	even++;
	else
	odd++;
	}
	if(n%2){
		if(((n+1)/2)!=even)
		{
			cout<<-1<<'\n';
			return;
		}
	}
	else{
		if((n/2)!=even){
			cout<<-1<<'\n';
			return;
		}
	}
	cout<<(swap/2)<<'\n';
	
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}