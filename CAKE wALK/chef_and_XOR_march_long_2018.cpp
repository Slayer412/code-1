#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long

/* Function to calculate x raised to the power y in O(logn)*/
ll power(int x, unsigned int y) 
{ 
    int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 
int main()
{
	int n,q;cin>>n>>q;
	vector< ll > arr(n);
	vector< int > bits[n];
	ll temp;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		for(int j=0;j<31;++j)
		bits[i].push_back(0);
		ll t=arr[i];
		int x=0;
		do{
			bits[i][x]=t%2;
			t=t/2;
			x++;
		}while(t!=0);
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<31;j++)
			bits[i][j]+=bits[i-1][j];
	}
	while(q--)
	{	ll ans=0;
		int l,r;
		cin>>l>>r;
		
		l--;
		r--;
		for(int j=0;j<31;j++)
		{	
			int setbit,unsetbit;
			if(l>0)
			{
				setbit=bits[r][j] - bits[l-1][j];
				unsetbit = r - l + 1 -setbit;
				
			}
			else
			{
				setbit=bits[r][j];
				unsetbit = r - l + 1 - setbit;
			}
			if(setbit < unsetbit)
			ans+=pow(2,j);
		}
		cout.precision(20);
		cout<<ans<<endl;
		
	}
	
}
