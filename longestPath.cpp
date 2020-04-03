/*G - Longest Path*/
#include <bits/stdc++.h>

using namespace std;

int longestRoad(const vector <vector <int> >& grafo, int nodoIni);

int memo[100001];

int main(){
	
	int vertices;
	int aristas;

	cin >> vertices >> aristas;

	vector <vector <int> > grafo(vertices);

	int u, v;

	for (int i = 0; i < aristas; ++i)
	{
		cin >> u >> v;

		u--;
		v--;

		grafo[u].push_back(v);
	}

	int maximo = -1;

	memset(memo, -1, sizeof memo);

	for (int i = 0; i < vertices; ++i)
	{
		if(memo[i] != -1){
			maximo = max(maximo, memo[i]);
		}
		else{
			maximo = max( maximo, longestRoad(grafo, i) );
		}
	}

	cout << maximo;

	return 0;
}


int longestRoad(const vector <vector <int> >& grafo, int nodoIni){
	
	if(memo[nodoIni] != -1){
		return memo[nodoIni];
	}
		
	int maximo = 0;
	
	for (int i = 0; i < grafo[nodoIni].size() ; ++i)
	{
		maximo = max(maximo, 1 + longestRoad(grafo, grafo[nodoIni][i]));
	}
		
	memo[nodoIni] = maximo;

	return maximo;
}
