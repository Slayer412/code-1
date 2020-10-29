#include<bits/stdc++.h>
using namespace std;
struct graph
{
    int vertex,edge;
    int **adj;
};
void adjmatrix()
{   int u,v;
    graph *g;
    g=(graph*)malloc(sizeof(graph));
    cout<<"Enter value of V and E"<<"\n";
    cin>>g->vertex>>g->edge;
    g->adj=malloc(sizeof(int)*(g->vertex*g->vertex));
    for(int i=0;i<v;i++)
        for(int j=0;i<v;j++)
        g->adj[i][j]=0;
    for(int i=0;i<g->edge;i++)
    {
        cout<<"Enter your 2 vertex"<<endl;
        cin>>u>>v;
        g->adj[u][v]=1;
        g->adj[v][u]=1;
    }
    for(int i=0;i<g->edge;i++)
    {   for(int j=0;j<g->edge;j++)
        cout<<g->adj[i][j];
        cout<<endl;
    }
}
int main()
{
    adjmatrix();
    return 0;
}
