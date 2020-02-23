/*B - Greedy Takahashi*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	Long A, B, K;

	cin >> A >> B >> K;

	if(K >= A){
		K -= A;
		A = 0;
	}
	else{
		A -= K;
		K = 0;
	}

	if(K >= B){
		K -= B;
		B = 0;
	}
	else{
		B -= K;
	}

	cout << A << ' ' <<B;

	return 0;
}