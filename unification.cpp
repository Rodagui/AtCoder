/*C - Unification*/
 
#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
	
	char letra;
	vector <char> cadena;
	int tot = 0;
	int i = 0;
 
	while(cin>>letra){
		cadena.push_back(letra);
 
		if(i != 0){
			if(cadena[i] == '0' and cadena[i-1] == '1'){
				cadena.pop_back();
				cadena.pop_back();
				tot+=2;
				i-= 2;
			}
			else if(cadena[i] == '1' and cadena[i-1] == '0'){
				cadena.pop_back();
				cadena.pop_back();
				tot+=2;
				i-= 2;
			}
 
		}
 
		i++;
	}
 
	cout<<tot<<'\n';
 
	return 0;
}