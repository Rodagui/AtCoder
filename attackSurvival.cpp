/*C - Attack Survival*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int players;
	int points;
	int less;
	int pos;
	int aux;

	cin >> players >> points >> less;

	vector <int> game(players);

	for (int i = 0; i < less ; ++i)
	{
		cin >> pos;
		pos--;

		game[pos]++;
	}

	for (int i = 0; i < players; ++i)
	{
		game[i] = points - less + game[i] ;
		if(game[i] > 0)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}