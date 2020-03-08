/*Count Balls*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    long long blue;
    long long red;
    long long times;
    long long suma;
    long long mod;
    
    cin >> times >> blue >> red;
    
    suma =  blue + red;
    mod = times % suma;
    
    suma = times / suma;
    suma = suma * blue;
    
    if(mod >= blue)
       suma += blue;
    else
       suma += mod;
    
    cout << suma;
        
    return 0;
}