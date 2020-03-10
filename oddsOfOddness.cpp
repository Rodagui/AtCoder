/*A - Odds of Oddness*/
/*C - Next Prime*/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double nums = 0.0;
	double ans = 0.0;
	
	int N;
	cin >> N;

	nums = ceil((double)N/2);
	
	ans = nums / (double)N;

	cout << fixed << setprecision(10) << ans << endl;

	

	return 0;
}