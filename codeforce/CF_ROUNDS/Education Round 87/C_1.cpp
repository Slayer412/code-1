#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
#define PI 3.14159265
void solve()
{	
	double n;cin>>n;
	double area=1;
	double tt=2*n;
	double temp=(double)(2*tan(((double)180/tt)*PI/180));
	//printf("%.6f\n",temp);
	area=(double)area/temp;
	area=area*2;
	printf("%.8f\n",area);
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

