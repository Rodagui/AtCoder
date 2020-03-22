/*B - One Clue*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int elem;
	int pos;

	cin >> elem >> pos;

	elem--;
	vector <int> rango;
	rango.push_back(pos);

	for (int i = 1; i <= elem; ++i)
	{
		if(pos + i > 1000000){
			break;
		}
		rango.push_back(pos + i);
	}

	for (int i = 1; i <= elem; ++i)
	{
		if(pos - i < -1000000){
			break;
		}
		rango.push_back(pos - i);
	}

	sort(rango.begin(), rango.end());
	
	for (int i = 0; i < rango.size(); ++i)
	{
		cout << rango[i] << ' ';
	}
	return 0;
}


