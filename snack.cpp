/*C - Snack MCM*/
#include <bits/stdc++.h>

using namespace std;
using Number = long long;

inline pair<Number, int> getPower(Number& n, const Number& p)
{
	pair<Number, int> powerP(p, 0);

	while (n % p == 0)
	{
		++powerP.second;
		n /= p;
	}

	return powerP;
}

inline vector< pair<Number, int> > getPrimeFactors(Number n)
{
	vector< pair<Number, int> > primeFactors;

	pair<Number, int> powerP = getPower(n, 2);

	if (powerP.second > 0)
		primeFactors.push_back(powerP);

	const Number sqrtN = sqrt(n);

	for (Number i = 3; i <= sqrtN and n > 1; i += 2)
	{
		powerP = getPower(n, i);

		if (powerP.second > 0)
			primeFactors.push_back(powerP);
	}

	if (n > 1)
		primeFactors.push_back(make_pair(n, 1));

	return primeFactors;
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	Number a, b, num;
	int p;

	cin >> a >> b;

	vector < pair<Number, int> > primeFactorsA = getPrimeFactors(a);
	vector < pair<Number, int> > primeFactorsB = getPrimeFactors(b);

	map <Number, int> :: iterator it;
	map <Number, int> MCM;
	Number ans = 1ll;

	for (int i = 0; i < primeFactorsA.size(); ++i){
		num = primeFactorsA[i].first;
		p = primeFactorsA[i].second;
		MCM[num] = p; 
	}


	for (int i = 0; i < primeFactorsB.size(); ++i)
	{
		num = primeFactorsB[i].first;
		p = primeFactorsB[i].second;
	
		if(MCM.count(num)){
		
			if(MCM[num] < p)
				MCM[num] = p;
		}
		else{
			MCM[num] = p;
		}
	}
    
	for (it = MCM.begin(); it != MCM.end() ; ++it)
	{

		num = it -> first;
		p = it -> second;

		for (int j = 0; j < p; ++j)
			ans *= num;

	}

	cout << ans; 

	return 0;
}