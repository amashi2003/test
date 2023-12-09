#include <iostream>
		
using namespace std;
int main(void)
{
	int i, j, k,b;
	float x, y, z,a;
	
	//ADDITION
	
	i = 100; j = 2;
    k = i + j;
    x = 1.0; y = 0.02;
    z = x + y;
    
    cout << k;
	cout <<"\n";
	cout << z;
	cout <<"\n";
	
	//SUBSTRACTION
	
	i = 100; j = 200;
    k = i - j;
    x = 1.0; y = 1.0;
    z = x - y;
    
    cout << k;
	cout <<"\n";
	cout << z;
	cout <<"\n";
	
	int e, f,g,h;

    e = -100;
    f= -e;
	
	cout << f;
	cout <<"\n";
	
	g = 100;
    h = +g;
    
    cout << h;
    
    return 0;
}
