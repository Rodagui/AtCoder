/*C - Poll*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int mayor = 0;
	string pal;

	cin >> tam;

	map <string, int> dicc;

	for (int i = 0; i < tam ; ++i)
	{
		cin >> pal;

		if(dicc.count(pal))
			dicc[pal]++;
		else
			dicc[pal] = 1;

		if(dicc[pal] > mayor)
			mayor = dicc[pal];
	}

	map <string, int>:: iterator it;
	
	for (it = dicc.begin(); it != dicc.end() ; ++it)
		if (it -> second == mayor)
			cout << it -> first << '\n';
	

	return 0;
}