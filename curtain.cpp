/*A - Curtain*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int tam;
	int curt;

	cin >> tam >> curt;

	if(tam - (2 * curt) <= 0)
		cout << '0';
	else
		cout << (tam - (2 * curt));
	
	return 0;
}