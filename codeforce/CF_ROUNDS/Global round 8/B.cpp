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
	string s="codeforces";
	if(n==1){
		cout<<s;
		return;
	}
	ll sum=1;
	vector<int> a(10,1);
	int inx=0;
	while(sum<n){
		a[inx]++;
		inx=(inx+1)%10;
		sum=1;
		f(i,0,9)sum*=a[i];
	}
	
	f(i,0,9){
		f(j,1,a[i]){
			cout<<s[i];
		}
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}