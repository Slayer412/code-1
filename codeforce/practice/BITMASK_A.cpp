#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
    ll n;cin>>n;
    vector<int> ans;
    while(1){
        int x=log2(n)+1;
        ans.push_back(x);
        n=n^((1<<x)-1);
        ll temp=n+1;
        if(temp && !(temp & (temp-1))){
            break;
        }
    }
    cout<<ans.size()<<'\n';
    for(int i:ans)cout<<i<<" ";
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}