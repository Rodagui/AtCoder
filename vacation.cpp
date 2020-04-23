/*C - Vacation*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

vector <Long> cero;
vector <Long> uno;
vector <Long> dos;

vector <vector <Long> > memo;

Long maxHappiness(Long dias, Long anterior);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long dias;

	cin >> dias;

	cero = vector <Long>(dias);
	uno = vector <Long>(dias);
	dos = vector <Long>(dias);

	memo = vector<vector <Long> >(dias + 1, vector<Long> (4, -1));

	for (int i = 0; i < dias; ++i)
	{
		cin >> cero[i] >> uno[i] >> dos[i];
	}

	Long ans;

	ans = maxHappiness(dias - 1, 3ll);

	cout << ans;

	return 0;
}

Long maxHappiness(Long dias, Long anterior){

	if(dias < 0ll){
		return 0ll;
	}

	if(memo[dias][anterior] != -1){
		return memo[dias][anterior];
	}

	Long ans;


	if(anterior == 3ll){

		ans = maxHappiness(dias - 1, 0) + cero[dias];
		ans = max(ans, maxHappiness(dias-1, 1) + uno[dias]);
		ans = max(ans, maxHappiness(dias-1, 2) + dos[dias]);
	}

	else if(anterior == 0){
		ans = maxHappiness(dias-1, 2) + dos[dias];
		ans = max(ans, maxHappiness(dias-1, 1) + uno[dias]);
	}
	else if(anterior == 1){
		ans = maxHappiness(dias - 1, 0) + cero[dias];
		ans = max(ans, maxHappiness(dias-1, 2) + dos[dias]);
	}
	else{
		ans = maxHappiness(dias-1, 1) + uno[dias];
		ans = max(ans, maxHappiness(dias-1, 0) + cero[dias]);
	}

	memo[dias][anterior] = ans;

	return ans;

}