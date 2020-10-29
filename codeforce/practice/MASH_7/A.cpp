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
	string s;cin>>s;
	//cout<<s<<'\n';
	set<char> st;
	int n=s.size();
	if(n<26){
		cout<<-1<<'\n';
		return;
	}
	int ok=1;
	for(int i=0;i<n;i++){
		ok=1;
	//	if(n-i>=25)break;
		vector<int> vis(27,1); 
		int j=i;
		for(j;j<i+26;++j){
			
			if(s[j]=='?')
			continue;
			if(vis[s[j]-'A']){
				vis[s[j]-'A']=0;
			}
			else{
				ok=0;
				break;
			}
			
		}
		
		if(!ok){
			continue;
		}
	//	cout<<i<<" "<<j<<'\n';
		for(int k=0;k<26;k++){
			if(vis[k]==1){
				char c='A'+k;
				//cout<<c<<' ';
			st.insert(c);
			}
		}
		for(int k=0;k<n;k++){
			if(k>=i && k<=i+25 && s[k]=='?' && !st.empty()){
			cout<<*st.begin();
			st.erase(st.begin());
			}
			else if(s[k]=='?' && (k>i+25 || k<i)){
				cout<<'Z';
			}
			else
			cout<<s[k];
		}
		return;
	}
	cout<<-1<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}