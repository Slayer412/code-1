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
const int N=2005;
vector < int > row[N][10],col[N][10]; 
int mnrow[10];
int mxrow[10];
int mncol[10];
int mxcol[10];
void solve()
{
	int n;cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		f(j,0,9){
			row[i][j].clear();
			col[i][j].clear();
		}
	}
	f(i,0,9){
		mnrow[i]=-1;
		mxrow[i]=-1;
		mncol[i]=-1;
		mxcol[i]=-1;

		
	}
	int ans[10]={0};
	for(int i=0;i<n;i++){
		cin>>s[i];
		
		f(j,0,n-1){
			int d=s[i][j]-'0';
			row[i][d].pb(j);
			col[j][d].pb(i);
		}
	}
	f(i,0,n-1){
		f(d,0,9){
			if(!row[i][d].empty()){
				if(mnrow[d]==-1)mnrow[d]=i;
				mxrow[d]=i;
			}
			if(!col[i][d].empty()){
				if(mncol[d]==-1)mncol[d]=i;
				mxcol[d]=i;
			}

		}
	}
	f(i,0,n-1){
		f(d,0,9){
			//row
			if(!row[i][d].empty()){
				int x=row[i][d].front(),y=row[i][d].back();
				ans[d]=max(ans[d],(x-y)*max(i,n-i-1));
				int height=max(i-mnrow[d],mxrow[d]-i);
				ans[d]=max(ans[d],height*max(n-1-x,y));
			}
			//col
			if(!col[i][d].empty()){
				int x=col[i][d].front(),y=col[i][d].back();
				ans[d]=max(ans[d],(x-y)*max(i,n-i-1));
				int height=max(i-mncol[d],mxcol[d]-i);
				ans[d]=max(ans[d],height*max(n-1-x,y));
			}

		}
	}
	f(i,0,9)cout<<ans[i]<<" ";
	cout<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}