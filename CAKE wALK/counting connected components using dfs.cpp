#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int nodes,edges;
int vis[100001];
vector< ll > graph[100001];
void dfs(int V)
{
	vis[V]=1;
	//cout<<V<<"->";
	for(int child : graph[V])
	{
		if(!vis[child])
		dfs(child);
	}
}

int main()
{
	cin>>nodes>>edges;
	while(edges--)
	{
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);		
	}
	int cc=0;
	for(int i=1;i<=nodes;++i)
		if(vis[i]==0)
			dfs(i),++cc;
	cout<<cc;	
}

