/*B - Strings with the Same Length*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string cad1, cad2;
	int tam;

	cin >> tam;
	cin >> cad1 >> cad2;

	for (int i = 0; i < tam; ++i)
		cout << cad1[i] << cad2[i];

	return 0;
}