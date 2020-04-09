/*B - Popular Vote*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam;
	double M;

	cin >> tam >> M;

	vector <double> arr(tam);

	double frac = 4.0 * M;
	double total = 0.0;
	int ans = 0;
	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
		total += arr[i];
	}

	frac = total / frac;

	for (int i = 0; i < tam; ++i)
	{
		if(arr[i] >= frac){
			ans++;
		}
	}

	if(ans >= M){
		cout << "Yes";
	}
	else{
		cout << "No";
	}

	return 0;
}