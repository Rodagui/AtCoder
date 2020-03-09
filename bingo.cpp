/*B - Bingo*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map <int, pair<int, int> > have;
	vector <int> rows(3);
	vector <int> col(3);
	
	bool can = false;
	
	int mat[3][3];
	
	int dig, r, c;
	int nums;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> mat[i][j];
			have[mat[i][j]] = {i,j};
		}
	}


	cin >> nums;


	for (int i = 0; i < nums; ++i)
	{
		cin >> dig;

		if(have.count(dig)){

			r = have[dig].first;
			c = have[dig].second;

			col[c]++;
			rows[r]++;
			mat[r][c] = 0;
			if(col[c] == 3 or rows[r] == 3){
				can = true;
				break;
			}
		}
	}

	int aux = 0;
	if(can == false){

		for (int i = 0; i < 3; ++i)
		{
			if(mat[i][i] == 0)
				aux++;
		}

		if(aux == 3)
			can = true;
		else
			aux = 0;

		if(mat[0][2] == 0 and mat[1][1] == 0 and mat[2][0] == 0)
			can = true;

	}

	if(can)
		cout << "Yes";
	else
		cout <<"No";

	return 0;
}