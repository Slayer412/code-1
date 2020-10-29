#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
set<string> ans;
int fact(int n){
	if(n==1 || n==0)return 1;
	return n*fact(n-1);
}
void find(string s,int start,int end){
	if(start==end){
		ans.insert(s);
	}
	else{
		for(int i=start;i<=end;++i){
			swap(s[i],s[start]);
			find(s,start+1,end);
			swap(s[i],s[start]);
		}
	}
}
void solve()
{
	string s;cin>>s;
	int  f[26]={0};
	f(i,0,s.length()-1){
		f[s[i]-'a']++;
	}
	int n=s.length();
	int total=fact(n);
	f(i,0,25)total/=fact(f[i]);
	cout<<total<<'\n';
	find(s,0,n-1);
	for(string ss:ans)cout<<ss<<"\n";
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}