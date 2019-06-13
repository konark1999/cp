#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector <ll> g[100009];
ll visited[100009],count1=0;
void dfs(ll cur)
{
	visited[cur]=1;
	count1++;
	for(ll i=0;i<g[cur].size();i++)
	{
		ll node=g[cur][i];
		if(visited[node]==0)
			dfs(node);
	}
	return;
}
int main()
{
	ll n,m,x,y,i;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	if(m==n-1)
	{
		dfs(1);
		if(count1==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
		cout<<"NO\n";
}
