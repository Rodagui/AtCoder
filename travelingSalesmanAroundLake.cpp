/*C - Traveling Salesman around Lake*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int dist;
	int houses;
 
	cin >> dist >> houses;
 
	vector <int> arr(houses);
 
	for (int i = 0; i < houses; ++i)
	{
		cin >> arr[i];
	}
 
	arr.push_back(dist + arr[0]);
 
	int maximo = -1;
	int tot = 0;
	int dif = 0;
 
	for (int i = 0; i < houses; ++i)
	{
		dif = arr[i + 1] - arr[i];	
		tot += dif;
		
		if(dif > maximo){
			maximo = dif;
		}
	}
 
	cout << tot - maximo;
 
	return 0;
}