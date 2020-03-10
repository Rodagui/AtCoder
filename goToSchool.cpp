/*C - Go to School*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int students;
	int pos;

	cin >> students;

	vector <int> orden(students);

	for (int i = 0; i < students; ++i)
	{
		cin >> pos;
		pos--;

		orden[pos] = i + 1;
	}

	for (int i = 0; i < students; ++i)
		cout << orden[i] << ' ';
	

	return 0;
}