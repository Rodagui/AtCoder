/*B - Good Distance / */

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int puntos;
	int coord;

	cin >> puntos >> coord;

	vector < vector <int> > dist(puntos, vector <int> (coord));
	
	for (int i = 0; i < puntos; ++i)
	{
		for (int j = 0; j < coord; ++j)
		{
			cin >> dist[i][j];
		}
	}

	int raiz;
	int num;
	int suma;

	for (int i = 0; i < puntos; ++i)
	{
		for (int j = i + 1; j < puntos; ++j)
		{
			num = 0;
			for (int k = 0; k < coord; ++k)
			{
				suma = abs(dist[i][k] - dist[j][k]);
				num += (suma * suma);
			}

			raiz = sqrt(num);
			if(raiz * raiz == num){
				ans++;
			}
		}
	}

	cout << ans;
	return 0;
}