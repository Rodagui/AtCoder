#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	string cad;
 
	cin >> cad;
 
	if(cad[2] == cad[3] and cad[4] == cad[5]){
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}