#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void findAnagrams(string s, string p) { 
        int n=s.length();
        int m=p.length();
        map<char,int> need,seen;
        vector<int> v;
        int missing=0;
        for(int i=0;i<m;i++)
        {
            if(need[p[i]]==0){
                need[p[i]]=1;
                seen[p[i]]=0;
                missing++;
            }
            else
                need[p[i]]++;
        }
        int slow=0,fast=0;
        missing=m;
        for(fast;fast<n;fast++){
            if(need[s[fast]]){
            seen[s[fast]]++;
            if(seen[fast]==need[s[fast]])
                --missing;
            }
            if(missing==0){
                v.push_back(fast);
                while(missing==0){
                    
                    if(need[s[slow]]){
                        seen[s[slow]]--;
                    if(seen[s[slow]]<need[slow])
                        missing++;
                    }
                    slow++;
                }
            }
            
        }
        for(int i:v)cout<<i<<" ";
        cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

