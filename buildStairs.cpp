/*C - Build Stairs*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int tam;
	int num;
	cin >> tam;
	bool can = true;

	vector <int> arr;

	for (int i = 0; i < tam; ++i){
		
		cin >> num;
		
		if(i != 0){
			if(arr.back() != num){
				arr.push_back(num);
			}
		}
		else{
			arr.push_back(num);
		}

	}
	
	/*for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << ' ';
	}*/
	
	for (int i = 0; i < arr.size() - 1; ++i)
	{
		if(arr[i] > arr[i+1]){
			arr[i]--;
			if(arr[i] - arr[i+1] > 1){
				can = false;
				break;
			}
		}
	}
 
	for (int i = 0; i < arr.size() - 1; ++i)
	{
		if(arr[i] > arr[i+1]){
			can = false;
			break;
			
		}
	}

	if(can)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}