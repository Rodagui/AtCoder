/*B - Common Raccoon vs mOnster*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
int health;
int tam;
int suma = 0;
int aux;
 
cin >> health >> tam;
 
for(int i = 0; i < tam; i++){
   cin >> aux;
   suma += aux;
}
 
if(suma >= health)
  cout << "Yes";
else
  cout << "No";
 
return 0;
}