#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	}
	int ans=0;
	for (int i = 0; i < n; ++i){   
	    bool wasBest = false;
	    for(int j = 0; j < m; ++j){
	        bool isBest = true;
	        for(int k = 0; k < n; ++k)
	            if(a[k][j] > a[i][j])
	                isBest = false;
	        if(isBest)        
	            wasBest = true;
	    }
	    if(wasBest)
	        ans++;
	}   
	cout<<ans;
}
int main()
{	Fast;
	solve();
}