#include<iostream>
using namespace std;
#define ll long long
#define endl '\n'
#define speed ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
int count_one(ll n)
{	int cnt=0;
	while(n)
	{
		n=n&(n-1);
		++cnt;
	}
	return cnt;
}
void solve()
{	ll n;
	cin>>n;
	cout<<count_one(n)<<endl;
}
int main()
{
	speed;
	solve();
}

