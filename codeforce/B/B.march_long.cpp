#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int count_one(int n)
{	int count=0;
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            return (count%2);
}
bool check (int N,int i)
{	
        if( N & (1 << i) )
            return true;
        else
            return false;
}
void solve()
{
	int n,q;
	cin>>n>>q;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	while(q--)
	{	
		
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

