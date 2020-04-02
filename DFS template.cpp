/// DFS
///complexity O(v+e)

#include<bits/stdc++.h>
using namespace std;

int sz,m;
vector<int>graph[100005];
int vis[100005];
void DFS(int start)
{
    if(vis[start])
        return;
    vis[start]=1;
    for(int i=0; i<graph[start].size(); i++)
    {
        int u=graph[start][i];
        if(!vis[u])
            DFS(u);
    }
}
int main()
{
    int i,j,u,v;
    printf("Enter the number of node:");
    cin>>sz;
    printf("Enter the number of edge:");
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v); ///u number vertex theke kon kon vertex e jaowa jay ta u grapg[u] vector e store hocce
        graph[v].push_back(u);
    }
    DFS(1);
    for(i=1; i<=sz; i++)
        printf("%d ",vis[i]);
    return 0;
}
