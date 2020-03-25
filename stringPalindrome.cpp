/*B - String Palindrome*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int palin = true;
	string subPalin = "";
	string cad;
	string aux;
	int tam;

	cin >> cad;
	
	tam = cad.size();
	aux = cad;
	
	reverse(aux.begin(), aux.end());

	if(aux != cad){
		palin = false;
	}

	for (int i = 0; i < (tam - 1) / 2 ; ++i)
	{
		subPalin += cad[i];
	}

	aux = subPalin;

	reverse(aux.begin(), aux.end());

	if(aux != subPalin){
		palin = false;
	}

	subPalin = "";
	for (int i = ((tam + 3) / 2) - 1; i < tam ; ++i)
	{
		subPalin += cad[i];
	}

	aux = subPalin;

	reverse(aux.begin(), aux.end());

	if(aux != subPalin){
		palin = false;
	}

	if(palin)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}