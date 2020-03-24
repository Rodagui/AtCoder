/*B - 0 or 1 Swap*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool orden = true;
	int tam;
	int pos;

	cin >> tam;

	vector <int> arr(tam);
	vector <int> copy(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
	}
	copy = arr;
	sort(copy.begin(), copy.end());

	for (int i = 0; i < tam; ++i)
	{
		pos = arr[i];
		pos--;
		if(arr[i] != i + 1){
			swap(arr[i], arr[pos]);
			break;
		}
	}

	if(arr == copy)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}