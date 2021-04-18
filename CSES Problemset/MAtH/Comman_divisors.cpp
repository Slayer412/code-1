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
	int n;cin>>n;
	vi a(n);
	int mx=0;
	f(i,0,n-1)
	cin>>a[i],mx=max(mx,a[i]);
	vi divs(mx+1);
	f(i,0,n-1)divs[a[i]]++;
	for(int i=mx;i>=1;--i){
		int j=i;
		int cnt=0;
		while(j<=mx){
		//	cout<<j<<" "<<divs[j]<<"\n";
			if(divs[j]>1){
				cout<<j<<'\n';
				return;
			}
			else if(divs[j]==1)++cnt;
			j+=i;
	//		cout<<cnt<<"\n";
			if (cnt==2)
			{
				cout<<i<<"\n";
				return;
			}

		}
	}
}
int main()
{	Fast;
//	int t=1;//cin>>t;
//	while(t--)
	solve();
}