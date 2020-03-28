/*A - Frog 1*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

Long minCost(const vector <Long>& altura, int pos);
vector <Long> memo(1e5, -1);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;

	cin >> tam;

	vector <Long> altura(tam);

	for (int i = 0; i < tam; ++i){
		cin >> altura[i];
	}

	cout << minCost(altura, 0);

	return 0;
}

Long minCost(const vector <Long>& altura, int pos){

	if(pos == altura.size() - 1){
		return 0;
	}

	if(memo[pos] == -1){

		Long aux;

		aux = abs(altura[pos] - altura[pos + 1]) + minCost(altura, pos + 1);

		if(pos + 2 < altura.size()){
			aux = min(aux, abs(altura[pos] - altura[pos + 2]) + minCost(altura, pos + 2));
		}

		memo[pos] = aux;
	}

	return memo[pos];
}