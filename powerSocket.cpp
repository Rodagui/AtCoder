/*B - Power Socket*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int A, B;

	cin >> A >> B;
	int ans = 0;
	int aux = 1;

	while(aux < B){
		aux--;
		aux += A;
		ans++;
	}

	cout << ans;

	return 0;
}