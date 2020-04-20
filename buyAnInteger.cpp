/*C - Buy an Integer*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int digitos(Long numero);

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long A;
	Long B;
	Long X;

	cin >> A >> B >> X;

	Long mitad;
	Long izq = 0;
	Long der = 1000000000;

	Long aux;
	int dig;
	int ans = 0;

	while(izq <= der){

		mitad = (izq + der) / 2;
		dig = digitos(mitad);

		aux = (A * mitad) + (B * Long(dig));

		if(aux <= X){
			ans = mitad;
			izq = mitad + 1;
		}
		else{
			der = mitad - 1;
		}

	}

	cout << ans;


	return 0;
}

int digitos(Long numero){
	
	string cad = to_string(numero);

	return int(cad.size());
}