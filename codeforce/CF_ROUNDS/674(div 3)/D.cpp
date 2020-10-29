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
int findSubarraySum(vi &arr,int n) 
{ 
    // STL map to store number of subarrays 
    // starting from index zero having 
    // particular value of sum. 
    unordered_map<ll, int> prevSum; 
  	int sum=0;
    ll res = 0; 
  
    // Sum of elements so far. 
    ll currsum = 0; 
  
    for (int i = 0; i < n; i++) { 
  
         
        currsum += arr[i]; 
        if (currsum == sum) 
            res++; 
        if (prevSum.find(currsum - sum) != prevSum.end()) 
            res += (prevSum[currsum - sum]); 
 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 

void solve()
{
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}