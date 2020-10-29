#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int nodes,edges;
int vis[100];
vector< ll > graph[100];
int sum=0;
void dfs(int V)
{
	vis[V]=1;
	sum++;
	for(int child : graph[V])
	{	
		if(vis[child]==0)
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
	dfs(1);
}

