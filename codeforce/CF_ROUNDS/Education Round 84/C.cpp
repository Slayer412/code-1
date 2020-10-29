#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,m,k;cin>>n>>m>>k;
	cout<<(n-1)+(m-1)+(n)*(m-1)+(n-1)<<'\n';
	cout<<string(m-1,'L');
	cout<<string(n-1,'U');
	for(int i=0;i<n;i++){
		if(i!=0)
		cout<<'D';
		if(i%2)
		cout<<string(m-1,'L');
		else
		cout<<string(m-1,'R');
	}
	cout<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}