/*C - Next Prime*/
#include <bits/stdc++.h>

#define MAX_N 1000000

using namespace std;
using Number = long long;

Number factor[MAX_N];
vector<bool> isNotPrime(MAX_N);
vector<Number> primes;

inline void createSieve()
{
	for (Number p = 2; p < MAX_N; ++p)
	{
		if (not isNotPrime[p])
		{	
			factor[p] = p;
			primes.push_back(p);
		}

		for (int j = 0; j < primes.size() and p * primes[j] < MAX_N and primes[j] <= factor[p]; ++j)
		{
			factor[p * primes[j]] = primes[j];
			isNotPrime[p * primes[j]] = true;
		}
	}

	return;
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	createSieve();

	Number num;

	cin >> num;
	for (Number prime : primes)
		if( prime  >= num){
			cout << prime;
			break;
		}

	return 0;
}