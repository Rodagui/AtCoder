/*C - Lower*/
#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(int pos, int h);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int aux = 0;
	int maximo = 0;
	cin >> tam;

	vector <int> alturas(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> alturas[i];
	}

	for (int i = 1; i < tam; ++i)
	{
		if(alturas[i] <= alturas[i - 1]){
			aux++;
		}
		else{
			aux = 0;
		}
		
		maximo = max(aux, maximo);
		//cerr << alturas[i - 1] << ' ' << alturas[i] << ' ' << aux << ' ' <<maximo << '\n';
	}

	cout << maximo;	

	return 0;
}

