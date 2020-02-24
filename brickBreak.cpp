/*D - Brick Break*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int ans = 0;
	int aux = 1;
	int tam;
	int num;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> num;

		if(num == aux)
			aux++;
		else
			ans++;
	}

	if(aux == 1)
		cout << "-1";
	else
		cout << ans;
	return 0;
}