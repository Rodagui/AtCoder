/*K - Stones*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int stones;
	int tam;

	cin >> tam >> stones;
	vector <int> jugada(tam);

	for (int i = 0; i < tam; ++i)
		cin >> jugada[i];

	bool ans;
	sort(jugada.begin(), jugada.end());

	vector<bool> memo(stones + 10);

	memo[0] = false;

	for (int piedras = 1; piedras <= stones; ++piedras)
	{

		memo[piedras] = false;

		for (int i = 0; i < jugada.size(); ++i)
		{
			if(piedras < jugada[i])
				break;

			if (memo[piedras - jugada[i]] == false){
				memo[piedras] = true;
			}
		}
	}

	ans = memo[stones];

	if(ans == true)
		cout << "First";
	else
		cout << "Second";

	return 0;
}

