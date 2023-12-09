#include <iostream>
		
using namespace std;
int main(void)
{
	int i, j, k,b;
	float x, y, z,a;
		
	//MULTIPLICATION
		    
	i = 10; 
	j = 12;
	k = i * j;
	x = 1.25; 
    y = 0.5;
	z = x * y;
		    
	cout << k;
	cout <<"\n";
	cout << z;
	cout <<"\n";
		    
	//DIVISION
		    
	i =10; j = 5;
	k = i / j;
	x = 1.0; y = 2.0;
	z = x / y;
	a = 1.0 / 0.0;  
	// b = 1/0; - generally considered as an error
		    
	cout << k;
	cout <<"\n";
	cout << z;
	cout <<"\n";
	cout << a;
	
	return 0;
		    
}
