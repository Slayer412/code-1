#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	cout<<(n/2)<<'\n';
	int i;
	for( i=1;i<=n;)
	{	if(i==1 && n>2)
		cout<<3<<" "<<i<<" "<<i+1<<" "<<i+2<<'\n',i+=3;
		else if(n%2==0 && i==n){
		cout<<1<<" "<<i;
		break;
		}
		else
		cout<<2<<" "<<i<<" "<<i+1<<'\n',i+=2;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

