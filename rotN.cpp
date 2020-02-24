/*B - ROT N*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	string cad;
	int mov;
	int aux;

	cin >> mov >> cad;

	for (int i = 0; i < cad.size(); ++i)
	{
		if((int)cad[i] + mov > 90)
			aux = 65 + (mov - (90 - (int)cad[i]) - 1);
		else
			aux = (int)cad[i] + mov;
		cout << (char)aux;
	}

	return 0;
}