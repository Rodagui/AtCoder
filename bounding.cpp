/*B - Bounding*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ant = 0;
	int ans = 0;
	int tam, X;
	int aux;

	cin >> tam >> X;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
		cin >> arr[i];

	if(ant <= X)
		ans++;

	for (int i = 1; i <= tam; ++i)
	{
		aux = ant + arr[i - 1];

		if(aux <= X)
			ans++;

		ant = aux;
	}

	cout << ans;

	return 0;
}