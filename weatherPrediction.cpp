/*A - Weather Prediction*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	string day;

	cin >> day;

	if(day == "Sunny")
		cout << "Cloudy";
	
	if(day == "Cloudy")
		cout << "Rainy";
	
	if(day == "Rainy")
		cout << "Sunny";


	return 0;
}