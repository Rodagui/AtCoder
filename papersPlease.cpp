/*B - Papers, Please*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam;
	int num;
	bool can = true;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> num;

		if(num % 2 == 0)
			if(num % 3 != 0)
				if(num % 5 != 0)
					can = false;
	}

	if(can)
		cout << "APPROVED";
	else
		cout << "DENIED";
	
	return 0;	
}