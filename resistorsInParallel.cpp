/*B - Resistors in Parallel*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double x;
	int tam;

	cin >> tam;

	double ans = 0.0;

	for (int i = 0; i < tam; ++i)
	{
		cin >> x;

		ans += (1.0 / x);
	}

	ans = 1.0 / ans;

	cout << fixed << setprecision(16) << ans ;


	return 0;
}