/*A - Remaining Balls*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	vector <pair <string, int> > balls(2);

	cin >> balls[0].first >> balls[1].first;
	cin >> balls[0].second >> balls[1].second;

	string cad;

	cin >> cad;

	if(cad == balls[0].first)
		balls[0].second--;
	else
		balls[1].second--;

	cout << balls[0].second << ' ' << balls[1].second;

	return 0;
}