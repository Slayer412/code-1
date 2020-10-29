#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
		return false;
	}
	return true;
}
void solve()
{
	int n;cin>>n;
	if(n==1){
		cout<<"FastestFinger\n";
		return;
	}
	if( (n==1 || (n&& !(n & (n-1))) || (n%2==0 && isprime(n/2))) && n>2)
	{
		cout<<"FastestFinger\n";
	}
	else{
		cout<<"Ashishgup\n";
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}