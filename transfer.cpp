/*A - Transfer*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout. tie(0);

	int a, b, c;

	cin >> a >> b >>c;

	if(c - a + b < 0)
		cout << "0";
	else
		cout << c - a + b;
	return 0;
}