#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	int a[n][m];
	int row[n]{0},col[m]={0};
	f(i,0,n-1){
		f(j,0,m-1){
		cin>>a[i][j];
		if(a[i][j])
		row[i]++,col[j]++;
		}
	}
	int cnt=0;
	f(i,0,n-1){
		f(j,0,m-1){
			if(row[i]==0 && col[j]==0){
				++cnt;
				col[j]++;
				row[i]++;
			}
		}
	}
	//cout<<cnt<"\n";
	if(cnt%2)
	cout<<"Ashish\n";
	else
	cout<<"Vivek\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}