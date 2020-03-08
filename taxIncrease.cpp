/*Tax Increase*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    double a, b;
    
    cin >> a >> b;
    
    long long izq = 1ll;
    long long der = LLONG_MAX;
    double middle;
    double limInf;
    double limSup;
    double aux;
    
    
    /*calculamos  el  limite innferior*/ 
    
    while(izq <= der){
        
        middle =  ((double)izq + (double)der) / 2.0;
 
        aux = floor(middle * 0.08);
         
        if( aux >= a){
           der = middle - 1;
           limInf = middle; 
        }
        else{
            izq = middle + 1;
        }
    } 
    
    izq = limInf;
    der = LLONG_MAX;
    
    while(izq <= der){
      
       
        middle =  ((double)izq + (double)der) / 2.0;
        aux = floor(middle * 0.08);
         
        if( aux >= a + 1.0){
           der = middle - 1;
           limSup = middle; 
        }
        else{
            izq = middle + 1;
        }
    
   }
   
    bool can = false;
    
    limSup--;
    
    for(int i = (int)limInf; i <= (int)limSup; i++){
    
     aux = (double)i * 0.1;
     
     if(floor(aux) == b){
        cout << i;
        can = true;
        break;     
     }
   }
    
    if(can == false)
      cout << -1; 
    
    return 0;
}