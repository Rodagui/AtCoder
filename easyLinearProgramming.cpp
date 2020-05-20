/*B - Easy Linear Programming*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int aux = 0;
	int A, B, C;
	int cards;
	cin >> A >> B >> C >> cards;

	if(cards <= A)
		cout << cards;
	else if(cards <= A + B)
		cout << A;
	else{
		aux = A + B;
		aux = cards - aux;
		aux *= -1;
		cout << A + aux;
	}

	return 0;
}