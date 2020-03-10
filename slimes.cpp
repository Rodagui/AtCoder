/*C - Slimes*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 1;
	string cad;
	int tam;

	cin >> tam >> cad;
	
	for (int i = 1; i < tam; ++i)
		if(cad[i-1] != cad[i])
			ans++;	
	
	cout << ans;
	
	return 0;
}