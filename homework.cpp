/*B - Homework*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int days;
	int assig;

	cin >> days >> assig;

	int need = 0;
	int n;

	for (int i = 0; i < assig; ++i)
	{
		cin >> n;
		need += n;
	}

	int ans = days - need;

	if(ans < 0){
		cout << "-1";
	}
	else{
		cout << ans;
	}

	return 0;
}