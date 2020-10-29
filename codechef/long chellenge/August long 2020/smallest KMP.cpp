#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string s,p;
	cin>>s>>p;
    map<char,int> fs,fp;
    for(int i=0;i<s.size();++i){
        fs[s[i]]++;
    }
    for(int i=0;i<p.size();++i){
        fp[p[i]]++;
    }
    for(char i='a';i<='z';i++){
        if(p[0]==i){
            int x=fs[i]-fp[i];
            string s1="",s2="";
            int t=x;
            while(t--)
            s1+=i,s2+=i;
           s1=p+s1;
           s2=s2+p;
           if(s1<s2)cout<<s1;
           else
           cout<<s2;
            
        }
        else{
            int x=fs[i]-fp[i];
            while(x--)
            cout<<i;
        }
    }
    cout<<endl;
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}