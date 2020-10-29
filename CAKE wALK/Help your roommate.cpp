#include<iostream>
#include<bitset>
using namespace std;
#define ll long long

void solve()
{
	int n;
	cin>>n;
	bitset<32>bit(n);
	cout<<bit.count()<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

