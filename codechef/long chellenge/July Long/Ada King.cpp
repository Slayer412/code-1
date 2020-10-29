#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int k;cin>>k;
	vector< vector<char> > board(8,vector<char>(8,'X'));
	board[0][0]='O';
	int t=k-1;
	for(int i=0;i<8;++i){
		for(int j=0;j<8;j++){
			if(i==0 && j==0)continue;
			else if(t){
				board[i][j]='.';
				t--;
				
			}
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout<<board[i][j];
		}
		cout<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}