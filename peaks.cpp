/*C - Peaks*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int aristas;
	int nodos;

	cin >> nodos >> aristas;
	
	vector <int> alturas(nodos);
	vector <vector <int> > graph(nodos);

	for (int i = 0; i < nodos; ++i)
	{
		cin >> alturas[i];
	}

	int u, v;

	for (int i = 0; i < aristas ; ++i)
	{
		cin >> u >> v;
		
		u--;
		v--;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	bool can = true;
	int ans = 0;
	int n;

	for (int i = 0; i < nodos; ++i)
	{
		can = true;

		for (int j = 0; j < graph[i].size(); ++j)
		{
			n = graph[i][j];
			if(alturas[n] >= alturas[i]){
				can = false;
				break;
			}
		}
		
		if(can)
			ans++;
	}

	cout << ans;

	return 0;
}