#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
string minWindow(string s, string t) {
        map<char,int> Needed;
        map<char,int> seen;
        int missing=0;
        int slow=0,fast=0;
        pair<int,int> ans={INT_MAX,INT_MAX};
        for(int i=0;i<t.length();i++){
			if(Needed[t[i]]==0)
			{	
				Needed[t[i]]=1;
				seen[t[i]]=0;
				++missing;
			}
			else
				Needed[t[i]]+=1;
		}
		for(fast;fast<s.length();fast++){
			
			if(Needed[s[fast]])
			{
				seen[s[fast]]+=1;
				if(seen[s[fast]]==Needed[s[fast]])
				--missing;
				cout<<missing<<" "<<fast<<'\n';
			}
			while(missing==0){
				if(ans.first==INT_MAX)
				ans={slow,fast};
				else if(ans.second-ans.first > fast-slow)
				ans={slow,fast};
				if(Needed[s[slow]]){
					seen[s[slow]]-=1;
					if(seen[s[slow]] < Needed[s[slow]])
					++missing;
				}
				++slow;
			}
		}
		cout<<ans.first<<" "<<ans.second<<'\n';
		
		if(ans.first==ans.second){
		
		string a="";
		a+=(s[ans.first]);
		return a;
		}
		return s.substr(ans.first,ans.second);
}
void solve()
{
	string s,t;cin>>s>>t;
	s=minWindow(s,t);
	cout<<s<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

