#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vll v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	list<ll> l;
	map<ll,int>mp;
	for(int i=0;i<n;i++)
	{	
		
		if((int)l.size()==min(k,n))
		{	
			if(mp[v[i]])
			continue;
			else
			{
				mp[l.back()]--;
				l.pop_back();
				l.push_front(v[i]);
				mp[v[i]]++;
			}			
		}
		else if(mp[v[i]]){
		//mp[v[i]]++;
		continue;
		}
		else 
		{
			l.push_front(v[i]);
			mp[v[i]]++;
		}
		
	}
	list<ll> :: iterator itr;
	cout<<(int )l.size()<<'\n';
	for(itr=l.begin(); itr != l.end() ; itr++)
	cout<<*itr<<" ";
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}