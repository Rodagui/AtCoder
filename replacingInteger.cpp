/*C - Replacing Integer*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long N, K;
	Long aux;

	cin >> N >> K;

	cout << min(N % K, K - (N % K));

	return 0;
}