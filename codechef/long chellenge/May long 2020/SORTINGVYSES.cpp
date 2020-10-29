#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	int ele;
	vi a(n+1),dup(n+1);
	a[0]=0;
	dup[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dup[i]=a[i];
	}
	sort(dup.begin(),dup.end());
	int x,y;
	while(m--){
		cin>>x>>y;
		if(a[x]==y || a[y]==x)
		swap(a[x],a[y]);	
	}
	int cnt=0;
	if(a==dup){
		cnt=0;
	}
	else{
		
		for(int i=1;i<=n;i++){
			while(a[i]!=i)
			{	++cnt;
				swap(a[i],a[a[i]]);
			}
		}
	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//	cout<<'\n';
	cout<<cnt<<endl;
	
	
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

