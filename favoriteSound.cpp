/*	A - Favorite Sound*/

#include <iostream>
using namespace std;
 
int main(){
	
	int A, B, C;
 
	cin>>A>>B>>C;
 
	int div, tot=0;
 
	div = B/A;
	if(div < C)
		tot = div;
	else 
		tot = C;
 
	cout<<tot<<'\n';
	return 0;
}