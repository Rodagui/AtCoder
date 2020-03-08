/*C - Fennec vs Monster*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int tam;
    int veces;
    long long ans = 0ll;
    
    cin >> tam >> veces;
    
    vector <long long> arr(tam);
    
    for(int i = 0; i < tam; i++){
        cin >> arr[i];
    }
    
    if(veces >= tam)
       cout << "0";
    else{
        sort(arr.begin(), arr.end());
        tam -= veces;
        
        for(int i = 0; i < tam; i++)
           ans += arr[i];
        
        cout << ans;
    }
    
    return 0;
}