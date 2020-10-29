#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int l,r;cin>>l>>r;
	int XOR=l^r,f=0;
	bitset<12>bit(XOR);
	int ans=0;
	for(int i=11;i>=0;i--)
	{
		if(bit[i]==1)
		f=1;
		if(f)ans+=1<<i;
	}
	cout<<ans;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

