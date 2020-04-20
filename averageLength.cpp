/*C - Average Length*/

#include <bits/stdc++.h>

using namespace std;

int factorial(int n);

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double dist = 0.0;
	int fact;
	int tam;
	int aux;
	
	cin >> tam;
	
	vector < pair <double, double > > puntos(tam);
	vector <int> path(tam);

	for (int i = 0; i < tam; ++i)
		cin >> puntos[i].first >> puntos[i].second;
	
	fact = factorial(tam);
	
	for (int i = 0; i < tam; ++i){
		path[i] = i;
	}
	
	double x1, x2, y1, y2;
	int pos;

	for (int j = 0; j < fact ; ++j)
	{
		for (int i = 0; i < tam - 1; ++i)
		{
			pos = path[i];
			x1 = puntos[pos].first;
			y1 = puntos[pos].second;		
			
			pos = path[i + 1];
			x2 = puntos[pos].first;
			y2 = puntos[pos].second;

			dist += sqrt((x1 - x2)* (x1 - x2) + (y1 - y2) * (y1 - y2));
		}

		next_permutation(path.begin(), path.end());
	}

	dist /= fact;

	cout << fixed << setprecision(10) << dist;

	return 0;
}

int factorial(int n){

	if(n == 1){
		return 1;
	}
	else{
		return factorial(n - 1) * n;
	}
}