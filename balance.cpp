/*B - Balance*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = INT_MAX;
	int suma = 0;
	int aux;
	int tam;

	cin >> tam;
	vector <int> arr(tam);


	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
		suma += arr[i];
	}

	aux = arr[0];
	int sumaIzq;
	sumaIzq = aux;

	ans = abs((suma - sumaIzq ) - sumaIzq);

	for (int i = 1; i < tam; ++i)
	{
		sumaIzq += arr[i];
		ans = min(ans, abs(suma - sumaIzq - sumaIzq));
	}

	cout << ans;

	return 0;
}