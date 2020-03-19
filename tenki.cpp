/*A - Tenki*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	string pron;
	string cad;

	cin >> cad >> pron;

	for (int i = 0; i < 3; ++i)
	{
		if(cad[i] == pron[i]){
			ans++;
		}
	}

	cout << ans;

	return 0;
}