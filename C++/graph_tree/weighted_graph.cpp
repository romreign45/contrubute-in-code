#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mod 1000000007
#define endl '\n'

int main(){
	cin.tie(0)->sync_with_stdio(0);
	//to include the weight of the edge. by using list
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>> v[n+1];
	for (int i = 0; i < m; ++i)
	{
		int u,v,weight;
		cin>>u>>v>>weight;
		v[u].pb(make_pair(v,weight));
		v[v].pb(make_pair(u,weight));

	}
	
	return 0;
}
