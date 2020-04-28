/*Battle*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int A, B, C, D;

	cin >> A >> B >> C >> D;

	bool win = true;

	while(A > 0 and C > 0){

		C -= B;

		if(C <= 0){
			break;
		}

		A-= D;

		if(A <= 0){
			win = false;
			break;
		}
	}

	if(win)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}