#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
int power,n;
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b) 
{ 
       return (a.second > b.second); 
} 
void solve()
{	

	cin>>power>>n;
	vector< pair<int ,int > >v(n);
	
	for(int i=0;i<n;i++)
	cin>>v[i].first>>v[i].second;
	
	sort(v.begin(),v.end(),sortinrev);

	
		
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

