/*C - Rally*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
    
   int nums;
   long long minimo = LONG_MAX;
   long long aux = 0ll;
   
   cin >> nums;
   vector <int> arr(nums);
   
    for(int i = 0; i < nums; i++)
        cin >> arr[i];
    
   for(int i = 1; i <= 100; i++){
        
        aux = 0ll;
       for(int j = 0; j < nums; j++){
          aux += ((arr[j] - i) * (arr[j] - i));
       }
      
       if(aux < minimo)
            minimo = aux;
        
    }
 
    cout << minimo;
    
   return 0;
}