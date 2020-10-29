#include<iostream>
#include<bitset>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0),cin.tie(0)
void solve()
{
	int n,q,odd=0,even=0;
	cin>>n>>q;
	ll  arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    bitset<32>bs(arr[i]);
	    
	    int s=bs.count();
	    
	    if(s%2==0)
	    even++;
	    else
	    odd++;
	}
	while(q--)
	{
		int p;
		cin>>p;
	    bitset<32> b(p);
	    int x=b.count();
		if(x%2==0)
			cout<<even<<" "<<odd<<endl;
		else
	        cout<<odd<<" "<<even<<endl;
	}
}
int main()
{   speed;
	int t;cin>>t;
	while(t--)
	solve();
}

