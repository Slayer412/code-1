#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,m,x,y;cin>>n>>m>>x>>y;
	char s[n][m];
	int white=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>s[i][j];
			if(s[i][j]=='.')
			white++;
		}
	if(x*2<y){
		cout<<x*white<<endl;
		return;
	}
	else{
		int sum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j+1<m && s[i][j]=='.' && s[i][j+1]=='.'){
					sum+=y;
					j++;
				}
				else if( j<m && s[i][j]=='.')
				sum+=x;
			}
		}
		cout<<sum<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}