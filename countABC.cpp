/*B - Count ABC*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	string cad;
	int ans = 0;
	int tam;

	cin >> tam >> cad;

	for (int i = 0; i < tam - 2; ++i)

		if(cad[i] == 'A' and cad[i + 1] == 'B' and cad[i+2] == 'C')
		  ans++;
	

	cout << ans;
	
	return 0;
}