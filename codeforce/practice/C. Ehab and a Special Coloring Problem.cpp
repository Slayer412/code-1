#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
vi a(1e5+2);
void solve()
{
	int n;cin>>n;
	int f=1;
	int ele=1;
	for(int i=2;i<=n;i++){
		if(!a[i]){
			a[i]=ele;
			for(int j=i;j<=n;j+=i){
				a[j]=a[i];
			}
			ele++;
		}
	}
	f(i,2,n)cout<<a[i]<<" ";
	
}
int main()
{	Fast;
	
	//int t;cin>>t;
	//while(t--)
	solve();
} 