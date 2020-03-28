/*H - Grid 1*/

#include <bits/stdc++.h>

using namespace std;

using Long = long long;
const Long mod = Long(1e9) + 7;

Long memo[1001][1001];

Long roads(const vector < vector <char> >& mat, int x, int y, const int& h, const int& w);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int h, w;
	cin >> h >> w;

	vector < vector <char> > mat(h, vector <char> (w));

	memset(memo, -1, sizeof memo);

	for (int i = 0; i < h ; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cin >> mat[i][j];
		}
	}

	cout << roads(mat, 0, 0, h, w);



	return 0;
}


Long roads(const vector < vector <char> >& mat, int x, int y, const int& h, const int& w){

	if(x == h - 1 and y == w - 1){
		return 1;
	}

	if(memo[x][y] == -1){

		Long aux = 0ll;

		if(x + 1 < h and mat[x + 1][y] == '.'){
			aux += roads(mat, x + 1, y, h, w);
			aux %= mod;
		}

		if(y + 1 < w and mat[x][y + 1] == '.'){
			aux += roads(mat, x, y + 1, h, w);
			aux %= mod;
		}

		memo[x][y] = aux;
		
	}


	return memo[x][y];

}