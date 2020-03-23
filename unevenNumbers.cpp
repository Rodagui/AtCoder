/*B - Uneven Numbers*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	if(n < 10)
		cout << n;

	if(n >= 10 and n <= 99)
		cout << "9";

	if(n >= 100 and n <= 999)
		cout << n - 90;

	if (n >= 1000 and n <= 9999)
		cout << "909";

	if(n >= 10000 and n <= 99999)
		cout << n - 9090;

	if(n == 100000)
		cout << 90909;

	return 0;
}