/*B - Comparing String*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  
    int veces;
    int num;
    
    char letra;
    string a ="";
    string b ="";
    
    cin >> veces >> num;
    
    
    letra = (char)(num + 48);
    for(int i = 0; i < veces; i++)
        a += letra;
      
    letra = (char)(veces + 48);
    for(int i = 0; i < num; i++)
      b += letra;
    
    if(a <= b)
      cout << a;
    else
      cout << b;
 
return 0;
}