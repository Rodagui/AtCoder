/*A - We Love Golf*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int K, A, B;

	cin >> K >> A >> B;

	bool can = false;

	for (int i = A; i <= B; ++i)
	{
		if(i % K == 0)
			can = true;
	}

	if(can)
		cout << "OK";
	else
		cout << "NG";

	return 0;	
}