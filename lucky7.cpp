/*A - Lucky 7*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool can = false;
	string cad;


	cin >> cad;

	for (int i = 0; i < cad.size(); ++i)
	{
		if(cad[i] == '7'){
			can = true;
			break;
		}
	}

	if(can)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}