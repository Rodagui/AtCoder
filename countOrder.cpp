/*C - Count Order*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	int tam;
	
	cin >> tam;

	vector <int> arr1(tam);
	vector <int> arr2(tam);
	vector <int> copy(tam);


	for (int i = 0; i < tam; ++i)
		cin >> arr1[i];
	

	for (int i = 0; i < tam; ++i)
		cin >> arr2[i];
	

	copy = arr1;

	sort(copy.begin(), copy.end());

	a = 1;
	while(copy != arr1){
		next_permutation(copy.begin(), copy.end());
		a++;
	}

	copy = arr2;

	sort(copy.begin(), copy.end());

	b = 1;
	while(copy != arr2){
		next_permutation(copy.begin(), copy.end());
		b++;
	}

	cout << abs(a - b);


	return 0;
}