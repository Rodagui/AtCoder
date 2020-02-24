/*B - Palindrome-philia*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string cad;
	int ans = 0;

	cin >> cad;

	int j = cad.size() - 1;

	for (int i = 0; i < cad.size() / 2 ; ++i)
	{
		if(cad[i] != cad[j])
			ans++;
		j--;
	}

	cout << ans;

	return 0;
}