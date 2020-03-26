/*C - Exception Handling*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam;
	int maximo;
	int antMax;

	cin >> tam;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i){
		cin >> arr[i];
		if (i == 0){
			maximo = arr[i];
		}
		else if( i == 1){
			antMax = arr[i];

			if(antMax > maximo){
				swap(antMax, maximo);
			}
		}
		else{
			if(arr[i] > antMax){
				antMax = arr[i];

				if(antMax > maximo){
					swap(antMax, maximo);
				}
			}
		}
	}

	for (int i = 0; i < tam; ++i)
	{
		if(arr[i] == maximo){
			cout << antMax << '\n';
		}
		else{
			cout << maximo << '\n';
		}
	}

	return 0;
}