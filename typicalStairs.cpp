/*C - Typical Stairs*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;
const Long MOD = 1000000007ll;

set <Long> nums;
vector <Long> memo(100005, -1ll);
int tam;

Long ways(Long pos);
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int steps;

	cin >> tam >> steps;

	Long s;
	for (int i = 0; i < steps; ++i)
	{
		cin >> s;
		nums.insert(s);
	}

	cout << ways(0ll);

	return 0;
}

Long ways(Long pos){

	if(pos == tam)
		return 1ll;

	if(pos > tam)
		return 0ll;


	if(memo[pos] != -1ll)
		return memo[pos];

	Long ans = 0ll;

	if(nums.count(pos + 1) == 0){
		ans += ways(pos + 1);
		ans %= MOD;
	}

	if(nums.count(pos + 2) == 0){
		ans += ways(pos + 2); 
		ans %= MOD;
	}

	ans %= MOD;

	memo[pos] = ans;

	return ans;
}