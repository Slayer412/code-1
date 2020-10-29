#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
vector< vector<int> > star(9,vector<int>(9));
vector<int> col(8,0);
vector<int> diag1(20),diag2(20);
int cnt=0;
void go(int y){
	if(y==8){
		++cnt;
		return;
	}
	else{
		f(x,0,7){
			if((col[x] || diag1[x+y] || diag2[(x-y)+7]))continue;
			if(star[x][y]==1)continue;
			col[x]=diag1[x+y]=diag2[(x-y)+7]=1;
			go(y+1);
			col[x]=diag1[x+y]=diag2[(x-y)+7]=0;
		}
	}
}
void solve()
{
	
	string s;
	f(i,0,7){
		cin>>s;
		f(j,0,7)if(s[j]=='*')star[i][j]=1;
	}
	go(0);
	cout<<cnt<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}