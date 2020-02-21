/*B - K-th Common Divisor*/
#include <iostream>
 
using namespace std;
 
int main(){
 
	int A, B, K;
	int menor, div, i, tot = 0;
 
	cin>>A>>B>>K;
 
	if(A<B)
		menor = A;
	else
		menor = B;
 
	div = menor;
 
	for (i = menor; i > 0 ; i--)
	{
		if(A%i == 0 and B%i == 0)
			tot++;
 
		if(tot == K)
			break;
	}
 
	cout<<i<<'\n';
 
	return 0;
}