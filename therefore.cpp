/*A - ∴ (Therefore)*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;
	cin >> num;

	int n = num % 10;

	if(n == 2 or n == 4 or n == 5 or n == 7 or n == 9)
		cout << "hon";
	else if(n == 0 or n == 1 or n == 6 or n == 8)
		cout << "pon";
	else
		cout << "bon";

	return 0;
}