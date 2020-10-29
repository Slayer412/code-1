#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    if(n>1 && s[n-1]=='o' && s[n-2]=='p'){
        cout<<"FILIPINO\n";
        return;
    }
    if(n>=4 && s[n-1]=='u' && s[n-2]=='s' && (s[n-3]=='e' || s[n-3]=='a') && (s[n-4]=='d' || s[n-4]=='m') ){
        cout<<"JAPANESE\n";
        return;
    }
    if(n>4 && s[n-1]=='a' && s[n-2]=='d' && s[n-3]=='i' && s[n-4]=='n' && s[n-5]=='m'){
        cout<<"KOREAN\n";
        return;
    }
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}