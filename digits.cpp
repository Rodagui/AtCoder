/*B - Digits*/

#include <bits/stdc++.h>

using namespace std;

int cuentaDigitos(int num, int base);

int main(){
	
	int num;
	int base;

	cin >> num >> base;
	cout << cuentaDigitos(num, base);
	
	return 0;
}


int cuentaDigitos(int num, int base){
	int ans = 0;

	while(num > 0){
		num /= base;
		ans++;
	}

	return ans;
}