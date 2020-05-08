/*B - Contest with Drinks Easy*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long tot = 0;
	long long costo;
	int bebidas;
	int tam;
	int pos;

	cin >> tam;

	vector <long long> tiempos(tam);

	for (int i = 0; i < tam; ++i){
		cin >> tiempos[i];
		tot += tiempos[i];
	}
	
	cin >> bebidas;

	for (int i = 0; i < bebidas; ++i)
	{
		cin >> pos >> costo;
		pos--;

		cout << tot - tiempos[pos] + costo << '\n';
	}

	return 0;
}