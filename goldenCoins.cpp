/*B - Golden Coins*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	
	int coins;
 
	cin >> coins;
 
	int aux;
	int ans = 0;
 
	aux = coins / 500;
	ans = 1000 * aux;
 
	aux = coins - (aux * 500);
	aux = aux / 5;
	ans += (aux * 5);
 
	cout << ans;
 
	return 0;
}