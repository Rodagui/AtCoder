/*C - management*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <int> arr(tam);

	int pos;

	for (int i = 0; i < tam - 1; ++i)
	{
		cin >> pos;
		pos--;

		arr[pos]++;
	}

	for (int i = 0; i < tam; ++i)
	{
		cout << arr[i] << '\n';
	}


	return 0;	
}