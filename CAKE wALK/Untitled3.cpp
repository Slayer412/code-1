#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int count_one_iseven (int n)
{	int count=0;
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            return (count%2) ? 0 :1 ;
}
void solve()
{
	int n,q;
	cin>>n>>q;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	while(q--)
	{	vector < ll > v(n);
		ll k;cin>>k;
		int evn=0,odd=0;
		for(int i=0;i<n;i++)
		{
			v[i]=arr[i]^k;
			if(count_one_iseven(v[i]))evn++;
			else odd++;
		}
		cout<<evn<<" "<<odd<<endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

