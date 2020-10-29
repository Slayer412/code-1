#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int arr[2*n];
	f(i,1,2*n){
		cin>>arr[i-1];
	}
	sort(arr,arr+2*n);
	int sum1=0,sum2=0;
	f(i,0,n-1){
		sum1+=arr[i];
	}
	f(i,n,2*n-1){
		sum2+=arr[i];
	}
	if(sum1==sum2){
		cout<<-1<<'\n';
	}
	else{
		for(int i:arr)cout<<i<<" ";
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}