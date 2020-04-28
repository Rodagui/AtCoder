/*C - gacha*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);;

	int tam;

	cin >> tam;

	set <string> pals;

	string cad;

	for (int i = 0; i < tam; ++i)
	{
		cin >> cad;

		pals.insert(cad);
	}

	cout << pals.size();

	return 0;
}