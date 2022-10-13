#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mod 1000000007
#define endl '\n'

int main(){
	// cin.tie(0)->sync_with_stdio(0);
	int V,E;
	cin>>V>>E;
	vector <pair<int,int>> v;
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		pair<int,int> p;
		p=make_pair(u,v);
		v.push_back(p);
	}

	
	return 0;
}
