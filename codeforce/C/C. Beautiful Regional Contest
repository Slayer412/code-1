#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    map<int,int> mp;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        mp[-ele]++;
    }
    vector<int> pp;
    for(auto i:mp){
        pp.push_back(i.second);
    }
    bool ok=false;
    int g=pp[0];
    int s=0;
    int i=1;
    while(s<=g && i<pp.size())
    s+=pp[i++];
    if(g<s){
    	int b=0;
    	while(b<=g && i<pp.size())
    	b+=pp[i++];
    	while(i<pp.size() && g+b+s+pp[i]<=n/2)
    	b+=pp[i++];
    	if(g<b && g+s+b<=n/2){
    		ok=true;
		}
		if(ok)
		cout<<g<<" "<<s<<" "<<b<<"\n";
	}
	if(!ok)
	cout<<0<<" "<<0<<" "<<0<<'\n';
    
    
}
int main()
{
    int t;cin>>t;
    while(t--)
    solve();
}
