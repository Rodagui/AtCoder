/*C - Guess The Number*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int can = true;
	int lines;
	int valor;
	int tam;
	int pos;

	cin >> tam >> lines;
	vector <int> number(tam, -1);

	if(tam == 1 and lines == 0)
		number[0] = 0;
	else{

		for (int i = 0; i < lines; ++i)
		{
			cin >> pos >> valor;

			pos--;
			
			if(number[pos] == -1)
				number[pos] = valor;
			else 
				if(number[pos] != valor)
					can = false;
		}

		if(number[0] == 0 and tam != 1)
			can = false;
		
		for (int i = 0; i < tam; ++i)
		{
			if(number[0] == -1)
				number[0] = 1;
			
			if(number[i] == -1)
				number[i] = 0;

		}


	}


	if(can)
		for (int i = 0; i < tam; ++i)
			cout << number[i];
	else
			cout << "-1";
	
		
	return 0;
}