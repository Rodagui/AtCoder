/*A - Sheep and Wolves*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int wolves;
	int sheep;

	cin >> sheep >> wolves;

	if(wolves >= sheep)
		cout << "unsafe";
	else
		cout << "safe";
	
	return 0;
}