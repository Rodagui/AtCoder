/*A - Harmony*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int a;
	int b;

	cin >> a >> b;

	int lim = 1000000000;

	for (int i = 1; i <= lim; ++i)
	{
		if( abs(a - i) == abs(b - i)){
			ans = i;
			break;
		}
	}

	if(ans)
		cout << ans;
	else
		cout << "IMPOSSIBLE";

	return 0;
}