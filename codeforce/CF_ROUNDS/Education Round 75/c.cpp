#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string str;cin>>str;
	string s[2];
	for(auto c:str){
		s[(c-'0')&1]+=c;
	}
	reverse(s[0].begin(),s[0].end());
	reverse(s[1].begin(),s[1].end());
	string res="";
	while(!(s[0].empty() && s[1].empty())){
		if(s[0].empty()){
			res+=s[1].back();
			s[1].pop_back();
			continue;
		}
		if(s[1].empty()){
			res+=s[0].back();
			s[0].pop_back();
			continue;
		}
		if(s[0].back() < s[1].back()){
			res+=s[0].back();
			s[0].pop_back();
		}
		else{
			res+=s[1].back();
			s[1].pop_back();
			
		}
	}
	
	cout<<res<<'\n';
}
int main()
{	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;cin>>t;
	while(t--)
	solve();
}