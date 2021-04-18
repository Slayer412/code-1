// Problem: D. Add to Neighbour and Remove
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// URL: https://codeforces.com/contest/1462/problem/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms

//code by: Ravi Khatri @ravi_the_great
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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int i=1;
	int cnt=0;
	int now=a[0];
	int same=1;
	int f=1;
	f(i,1,n-1){
		if(a[i]!=a[i-1]){
			f=0;
			break;
		}
	}
	if(f){
		cout<<0<<endl;
		return;
	}
	int last=0;
	int sum=0;
	while(i<n){
		if(sum > 0){
			sum+=a[i];
			if(now==sum){
				++i;
				++cnt;
				++same;
				sum=0;
				
			}
			else if(now < sum){
				now+=sum;
				sum=0;
				cnt+=2;
				++i;
			}
			else if(now > sum){
				++cnt;
				++i;
				
			}
			continue;
		}
		if(now>a[i]){
			if(i==n-1){
				if(a[i]==now)
				break;
				else{
					cnt+=same;
					break;
				}
			}
			sum+=a[i]+a[i+1];
			cnt+=1;
			if(now < sum){
				now+=sum;
				sum=0;
				++cnt;
				i+=2;
			}
			else if(now > sum){
				i+=2;
				
			}
			else if(now==sum){
				++same;
				sum=0;
				i+=2;
			}
		}
		else if(now==a[i]){
			++i;
			same++;
		}
		else{
			now+=a[i];
			++i;
			cnt+=same;
			same=1;
		}
	}
	cout<<cnt<<endl;
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}