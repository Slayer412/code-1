#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	int ans=0;
	bitset<32> bit(n<<1);
	//for(int i=0;i<32;i++)
	//cout<<bit[i]<<" ";
	for(int i=0;i<32;i++)
	{	if(bit[i])
		if((ans+(1<<i))>n)
		break;
		else
		ans+=1<<i;
	}
	cout<<ans;
}	
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

