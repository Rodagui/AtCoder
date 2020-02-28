/*C - Walk on Multiplication Table*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	Long ans = LLONG_MAX;
	Long divisor;
	Long numero;
	Long raiz;
	Long aux;

	cin >> numero;

	raiz = sqrt(numero);

	for (Long i = 1ll; i <= raiz; ++i)
	{
		if(numero % i == 0){

			divisor = numero / i;
			aux = (divisor + i) - 2ll;
			ans = min(ans, aux);
		}

	}

	cout << ans;

	
	return 0;
}