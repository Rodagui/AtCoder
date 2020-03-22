/*C - Green Bin*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <char> currCad(10);
	int nums;

	cin >> nums;
	map <vector <char> , int> same;

	for (int i = 0; i < nums ; ++i)
	{
		for (int i = 0; i < 10; ++i)
		{
			cin >> currCad[i];
			//cout << currCad[i];
		}

		sort(currCad.begin(), currCad.end());
		
		if(same.count(currCad)){
			same[currCad]++;
		}
		else{
			same[currCad] = 1;
		}
	}

	map <vector <char> , int>:: iterator it;

	long long ans = 0ll;
	long long n;
	for (it = same.begin(); it != same.end() ; ++it)
	{
		n = it -> second;
		if( n > 1){
			ans += (((n - 1ll) * n) / 2ll);
		}
	}

	cout << ans;

	return 0;
}