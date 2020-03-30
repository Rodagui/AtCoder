/*C - Remainder Minimization 2019*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int L, R;

	cin >> L >> R;

	int dif;
	int ans = 2020;

	dif = R - L;

	if(dif >= 2020){
		ans = 0;
	}
	else{


		for (int i = L; i < R; ++i)
		{
			for (int j = i + 1; j <= R; ++j)
			{
				int currAns = (i % 2019) * (j % 2019) % 2019;
					
				ans = min(ans, currAns);
				
				if (ans == 0)
					break;
			}

			if (ans == 0)
				break;
		}
	}

	cout << ans; 
	
	return 0;
}
