/*B - Tap Dance*/

#include <bits/Stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;
	cin >> cad;

	bool easily = true;

	for (int i = 0; i < cad.size(); ++i)
	{
		if((i + 1) % 2 == 0 and cad[i] == 'R'){
			easily = false;
			break;
		}

		if((i + 1) % 2 == 1 and cad[i] == 'L'){
			easily = false;
			break;
		}
	}

	if(easily)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}

