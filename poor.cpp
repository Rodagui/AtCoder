/*A - Poor*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set <int> arr;
	int num;
	for (int i = 0; i < 3; ++i)
	{
		cin >> num;
		arr.insert(num);
	}

	if(arr.size() == 2)
		cout << "Yes";
	else
		cout << "No";
	

	return 0;
}