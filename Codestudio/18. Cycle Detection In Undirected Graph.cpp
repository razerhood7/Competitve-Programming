#include<bits/stdc++.h>
bool solve(int i, vector<int> &visited, vector<vector<int>> &graph)
{
    queue<pair<int,int>>q;
    visited[i]=1;
    q.push({i,1});
    while(!q.empty())
    {
        int node = q.front().first;
        int pre = q.front().second;
        q.pop();
        for(auto it: graph[node])
        {
            if(!visited[it])
            {
                visited[it]=1;
                q.push({it,node});
            }
            else if(pre!=it)
            {
                return true;
            }
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<vector<int>> graph(n + 1, vector<int>());

    for (int i = 0; i < m; i++)
    {
        graph[edges[i][1]].push_back(edges[i][0]);
        graph[edges[i][0]].push_back(edges[i][1]);
    }

    vector<int> visited(n + 1, 0);
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            if(solve(i,visited,graph))
                return "Yes";
        }
    }
    return "No";
}
