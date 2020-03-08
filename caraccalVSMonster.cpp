/*D - Caracal vs MOnster*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    
    long long monsters = 1ll;
    long long health;
    cin >> health;
    long long aux = 1ll;
    
    while(health > 1ll){
      
        health /= 2ll;
        aux *= 2ll;
        monsters += aux; 
        
    }
    
    cout << monsters;
    
    return 0;
}