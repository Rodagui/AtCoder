/*D - Banned K*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	int tam;
	Long num;

	cin >> tam;

	vector <int> arr(tam);
	map <int, Long> ocurr;

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];

		if(ocurr.count(arr[i])){
			ocurr[arr[i]]++;
		}
		else{
			ocurr[arr[i]] = 1;
		}
	}

	Long total = 0;
	map <int, Long>::iterator it;	
	Long n;

	for (it = ocurr.begin(); it != ocurr.end() ; ++it)
	{
		
		n = it -> second;
		total += ((n-1) * n / 2);

	}

	for (it = ocurr.begin(); it != ocurr.end() ; ++it)
	{
		n = it -> second;
		it -> second = total - ((n - 1) * n / 2);
		n--;
		it -> second += ((n-1) * n / 2);
	}

	for (int i = 0; i < tam; ++i)
	{
		num = arr[i];
		cout << ocurr[num] << '\n';
	}


	return 0;
}