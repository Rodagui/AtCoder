/*C - Maximum Volume*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	double L;
	double raiz;
	double ans;

	cin >> L;

	raiz = L / 3.0;

	ans = raiz * raiz * raiz;

	cout << fixed << setprecision(12) << ans << endl;

	return 0;
}