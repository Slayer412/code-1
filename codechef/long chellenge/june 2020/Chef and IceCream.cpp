#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vi a(n);
	int a10=0,a15=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	if(a[0]!=5){
		cout<<"NO\n";
		return;
	}
	
	int c5=1,c10=0,c15=0;
	for(int i=1;i<n;i++){
		if(a[i]==10){
				if(c5<1){
					cout<<"NO\n";
				}
				else{
					c5-=1;
				}
				c10+=1;
		}
		if(a[i]==15){
				if(c10>=1 && c5>=1)
				c5-=1,c10-=1;
				else if(c5>2)
				c5-=3;
				else
				{
					cout<<"NO\n";
					return;
				}
				c15+=1;
		}
		if(a[i]==5)
		c5+=1;
	}
	cout<<"YES\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}