/*A - Round One*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int pos;
	vector <int> arr(4);

	cin >> pos;
	arr[pos] = 1;
	cin >> pos;
	arr[pos] = 1;

	for (int i = 1; i < 4; ++i)
	 	if(arr[i] == 0)
	 		cout << i ;
	
	return 0;
}