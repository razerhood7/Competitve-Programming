#include<bits/stdc++.h>
using namespace std;


bool helper(int i, vector<int> adj[], vector<int>& color)
{
	queue<int>q;
	q.push(i);
	color[i]=1;
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		for(auto it: adj[node])
		{
			if(color[it]==-1)
			{
				color[it]=1-color[node];
				q.push(it);
			}
			else if(color[it]==color[node])
			{
				return false;
			}
		}
	}
	return true;
}

bool checkbipar(int V, vector<int> adj[])
{
	vector<int>color(V+1, -1);
	for(int i=1;i<=V;i++)
	{
		if(color[i]==-1)
		{
			if(!helper(i,adj,color))
				return false;
		}
	}
	return true;
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];

	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	if(checkbipar(n,adj))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}

	return 0;
}
