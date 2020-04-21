/*C - Maximal Value*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	
	cin >> tam;
	
	vector <int> A(tam);
	vector <int> B(tam - 1);

	for (int i = 0; i < tam - 1; ++i)
		cin >> B[i];

	int ans = 0;

	if(tam == 2){
		ans = B[0] * 2;
	}
	else{

		ans = B[0];

		for (int i = 1; i < tam - 1 ; ++i)
		{
			ans += min(B[i], B[i-1]);
		}

		ans += B[tam - 2];
	}

	cout << ans;


	return 0;
}