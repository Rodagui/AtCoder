/*A - Registration*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	string t;

	cin >> s >> t;

	bool same = true;

	for (int i = 0; i < s.size() ; ++i)
	{
		if(s[i] != t[i])
			same = false;
	}

	if(same)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}