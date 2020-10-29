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
	int n;cin>>n;
	string a;cin>>a;
	int f=1;
	for(int i=0;i<n-1;i++){
		if(a[i]=='1'){
			int j=i+1;
			f=0;
			while(j<n && a[j]=='0')++j;
			
			if((j==n  &&  j-i-1>=2) || j-i==1){
				cout<<"No\n";
				return;
			}
			if(j!=n && j-i-1>2){
				cout<<"No\n";
				return;
			}
			i=j-1;

		}
		else if(f){
			int j=i;
			f=0;
			while(j<n && a[j]=='0')++j;

			if(j-i>2 && j!=n){
				cout<<"No\n";
				return;
			}
			else if((j==n||i==0) && j-i>=2){
				cout<<"No\n";
				return;
			}
			i=j-1;
		}

	}
	cout<<"Yes\n";
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}