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
	char w='W',b='B';
		int f=1;
		f(i,1,n){
			if(i%2)
			f=1;
			else
			f=0;
			f(j,1,n){
				if(f)f=0,cout<<w;
				else f=1,cout<<b;
			}
			cout<<'\n';
		}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}