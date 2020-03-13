/*B - Buffet*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int dish;
	int ant;
	int pos;

	cin >> dish;

	vector <int> orden(dish);
	vector <int> value(dish);
	vector <int> extra(dish - 1);

	for (int i = 0; i < dish; ++i)
	{
		cin >> orden[i];
	}

	for (int i = 0; i < dish; ++i){
		cin >> value[i];
	}

	for (int i = 0; i < dish - 1; ++i){
		cin >> extra[i];
	}

	ant = orden[0] - 1;

	for (int i = 0; i < dish; ++i)
	{
		pos = orden[i] - 1;
		ans += value[pos];

		if(pos - ant == 1)
			ans += extra[ant];

		ant = pos;
	}

	cout << ans;


	return 0;
}