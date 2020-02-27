/*B - Echo*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int tam;
	string cad;
	bool can = true;

	cin >> tam >> cad;

	if(tam % 2 == 1)
		can = false;
	else{

		int j = tam /2;
		for (int i = 0; i < tam / 2; ++i)
		{
			if(cad[i] != cad[j]){
				can = false;
				break;
			}
			j++;
		}

	}

	if(can)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}