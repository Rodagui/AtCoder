/*D - String Formation*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
	string izq = "";
	string der = "";
	int operations;
	int rev = 0;
	string cad;
	int op;
	int w;
 
	cin >> cad >> operations;
	int pal = 0; // 1 reversa
 
	while(operations--){
 
		cin >> op;
 
		if(op == 1){
			rev++;
			pal = 1 - pal;
		}
		else{
			char letra;
			cin >> w >> letra;
 
			if(rev % 2 == 0){
				if(w == 1)
					izq += letra;
				else
					der += letra;
			}
			else{
				if(w == 1)
					der += letra;
				else
					izq += letra; 
			}
			
		}
	}
 
	if(rev % 2 == 0){
 
		for (int i = izq.size() - 1; i >= 0 ; --i)
			cout << izq[i];
 
		cout << cad;
 
		for (int i = 0; i < der.size(); ++i)
			cout << der[i];
		
	}
	else{
		for (int i = der.size() - 1; i >= 0 ; --i)
			cout << der[i];
 
		reverse(cad.begin(), cad.end());
		cout << cad;
 
		for (int i = 0; i < izq.size(); ++i)
			cout << izq[i];
	}
 
 
 
	return 0;
}