/*C - Alchemist*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <double> arr(tam);
	double ans = 0.0;

	for (int i = 0; i < tam ; ++i)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	ans = (arr[0] + arr[1]) / 2.0; 

	for (int i = 2; i < tam; ++i)
		ans = (arr[i] + ans) / 2.0;

	cout << ans;
	
	return 0;
}