/*
	Problem:0/1 Knapsack
	atcoder dp contest problem E
	inputs:
		number of items  is n
		Knapsack capacity is W
		weight of ith item is w[i]
		value of ith item is val[i]
	outpur:
		maximum profit that can be achive by selecting items as per knapsack size

	CONSTRAINS:
		1<= n <= 1000;
		0<= W <=10^9;
		0<= w[i] <= W;
		0 <= val[i]<= 1000


 */

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{	
	ll n,W;

	cin>>n>>W; //number of items and capacity of knapscak

	
	vll val(n),w(n);//value array and weight array
	

	f(i,0,n-1)cin>>w[i]>>val[i];

	ll dp[2][W+1];//dp table

	f(i,0,W)dp[0][i]=0,dp[1][i]=0; // initialization 0th row and 0th collumn with value=0

	int flag=1;
	cout<<'\n';
	f(i,1,n){
		f(weight,1,W){
			if(flag){
				if(weight-w[i-1]>=0)
					dp[0][weight]=max(dp[1][weight],val[i-1]+dp[1][weight-w[i-1]]);
				else
					dp[0][weight]=dp[1][weight];
				
			}
			else{
				if(weight-w[i-1]>=0){
					dp[1][weight]=max(dp[0][weight],val[i-1]+dp[0][weight-w[i-1]]);
				}
				else
					dp[1][weight]=dp[0][weight];

			}
		}
		flag^=1;
	}
	// Final ans 
	cout<<max(dp[1][W],dp[0][W]);

}
int main()
{	Fast;
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}