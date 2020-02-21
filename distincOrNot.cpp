/*C - Distinct or Not*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam;

	cin >> tam;

	set <int> nums;
	int n;

	for (int i = 0; i < tam ; ++i)
	{
		cin >> n;
		nums.insert(n);
	}

	if(nums.size() == tam)
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}