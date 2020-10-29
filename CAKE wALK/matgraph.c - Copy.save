#include<stdio.h>
#include<stdlib.h>
typedef struct graph
{
    int V,E;
    int **adj;
}graph;
void adjmatrix()
{
    int u,v,i;
    graph *g;
    g=(graph*)malloc(sizeof(graph));
    printf("Enter value of V and E\n");
    scanf("%d%d",&(g->V),&(g->E));
   // printf("%d%d",g->V,g->E);
    int size=g->V*g->V;
    //printf("%d",size);
   // printf("1!");
    g->adj=malloc(size*sizeof(int));
   // printf("1!");
    for(u=0;u<g->V;u++){
        for(v=0;v<g->V;v++)
        g->adj[u][v]=0;
    }
    printf("0!");
    for(i=0;i< g->E;i++)
    {
        printf("Enter your 2 vertex\n");
        scanf("%d %d",&u,&v);
        g->adj[u][v]=1;
        g->adj[v][u]=1;
    }
    for(int i=0;i<g->E;i++)
    {   for(int j=0;j<g->E;j++)
        printf("%d ",g->adj[i][j]);
        printf("\n");
    }
}
int main()
{
    adjmatrix();
    return 0;
}
