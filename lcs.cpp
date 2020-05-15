/*F - LCS*/
#include <bits/stdc++.h>
using namespace std;

string cad1;
string cad2;

int n;
int m;

int longestSub(int i, int j);

vector <vector <int> > memo;
vector <vector <short> > aux;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> cad1 >> cad2;

	n = cad1.size();
	m = cad2.size();

	aux = vector <vector <short> >(n + 5, vector <short>(m + 5, 0));
	memo = vector <vector <int> >(n + 5, vector <int>(m + 5, -1));

	longestSub(0, 0);
	
	string ansCad = "";

	int i = 0;
	int j = 0;

	while(i < n and j < m){
		if(aux[i][j] == 1){
			ansCad += cad1[i];
			i++;
			j++;
		}
		else if(aux[i][j] == 2){
			i++;
		}
		else{
			j++;
		}
	}

	cout << ansCad;

	return 0;
}


int longestSub(int i, int j){

	if(i >= n or j >= m)
		return 0;

	if(memo[i][j] != -1){
		return memo[i][j];
	}

	int ans = 0;
	int varAux;

	if(cad1[i] == cad2[j]){
		ans = 1 + longestSub(i + 1, j + 1);
		aux[i][j] = 1;
	}
	else{
		ans = longestSub(i + 1, j);
		varAux = longestSub(i, j + 1);

		if(ans > varAux){
			aux[i][j] = 2;
		}
		else{
			aux[i][j] = 3;
			ans = varAux;
		}
	}

	memo[i][j] = ans;

	return ans;
}