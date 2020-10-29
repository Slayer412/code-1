#include<iostream>
#include<bitset>
using namespace std;
#define ll long long

void solve()
{
	int n;
	cin>>n;
	bitset<40>bit(n);
	for(int i=0;i<32;i++)
	{
		if(bit[i]){
		cout<<(1ll<<i)<<endl;
		break;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

