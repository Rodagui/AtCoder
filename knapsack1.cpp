/*D - Knapsack 1*/

#include <bits/stdc++.h>
using namespace std;
using Long = long long;

vector <Long> peso;
vector <Long> valor;
vector < vector <Long> > memo;

Long sumaMax(Long W, Long tam);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int items;
	int W;

	cin >> items >> W;

	peso = vector <Long>(items);
	valor = vector <Long>(items);
	memo = vector <vector <Long> >(W + 1, vector<Long> (items, -1));

	for (int i = 0; i < items; ++i)
		cin >> peso[i] >> valor[i];
	

	Long ans = 0;

	ans = sumaMax(W, items - 1);

	cout << ans;

	return 0;
}

Long sumaMax(Long W, Long tam){

	if(W == 0ll or tam < 0){
		return 0ll;
	}

	Long ans;

	if(memo[W][tam] != -1)
		return memo[W][tam];

	ans = sumaMax(W, tam - 1);

	if(W - peso[tam] >= 0)
		ans = max(ans, valor[tam] + sumaMax(W - peso[tam], tam - 1));

	memo[W][tam] = ans;

	return ans;
}