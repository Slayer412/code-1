// Problem: D - Hachi
// Contest: AtCoder - AtCoder Beginner Contest 181
// URL: https://atcoder.jp/contests/abc181/tasks/abc181_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

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
string s;
int ok=0;
void permute(string a, int l, int r) 
{ 
    // Base case 
    if (l == r){
    	int x=stoi(a);
    	if(x%8==0){
    		ok=1;
    	}
    } 
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
 
            // Swapping done 
            swap(a[l], a[i]); 
 
            // Recursion called 
            permute(a, l+1, r); 
 
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
void solve()
{
	cin>>s;
	int n=s.size();
	int cnt=0;
	vector<int> a(10);
	f(i,0,n-1){
		int x=(s[i]-'0');
		a[x]++;
	}
	if(n<=5){
		permute(s,0,n-1);
		if(ok){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
		return;
	}
	f(i,100,999){
		
		if(i%8==0){
			int x=i;
			int cnt=0;
			vector<int> temp=a;
			while(x){
				int t=x%10;
				if(temp[t])++cnt,temp[t]--;
				x/=10;
			}
			if(cnt==3){
			//	cout<<i<<'\n';
				cout<<"Yes\n";
				return;
			}
		}
	}
	cout<<"No\n";
	
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}