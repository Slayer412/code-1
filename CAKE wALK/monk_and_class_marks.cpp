#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long

bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{	if(a.second==b.second)
	return(a.first < b.first);
	return(a.second > b.second);
}
int main()
{
	int n;cin>>n;
	vector< pair<string,int> >v;
	string s;
	int m;
	for(int i=0;i<n;i++) 
	{
		cin>>s>>m;
		v.push_back(make_pair(s,m));
	}
	sort(v.begin(),v.end(),sortbysec);
	for(auto i=v.begin();i!=v.end();i++)
	cout<<i->first<<" "<<i->second<<endl;
}

