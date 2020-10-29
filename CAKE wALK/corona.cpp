#include <iostream>
#include <bitset>
#define endl '\n'
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;	
	bitset<32> bit(n);
	cout<<"Yes"<<endl;
	cout<<bit.count()<<endl;
	for(int i=0;i<bit.size();i++)
	if(bit[i])
	cout<<i<<" ";
}
int main()
{
	solve();
}

