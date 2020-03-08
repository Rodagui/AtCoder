/*B - Achieve the Goal*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int materias;
  int promedio;
  int cali;
  int aux;
  int suma = 0;
  int sAux  = 0;
  bool can = false;
 
  cin >> materias >> cali >> promedio;
 
  for(int i = 0; i < materias - 1; i++){
    cin >> aux;
    suma += aux;
  }
  
  if(suma / materias >= promedio)
    cout << "0";
  else{
    aux = 1;
 
    while(can == false){
      sAux = suma + aux;
      if(sAux/materias >= promedio){
        can = true;
        break;
      }
      aux++;
 
      if(aux > cali)
        break;
    }
 
    if(aux <= cali and can)
     cout << aux;
    else
      cout << "-1";
 
  }
  
  return 0;
}