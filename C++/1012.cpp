#include <iostream>
 
using namespace std;
 
int main() 
{ 
    	double x[3], pi;
	
	pi = 3.14159;
	
	cin >> x[0] >> x[1] >> x[2];
	
	cout.precision(3);	
	cout << fixed << "TRIANGULO: " << (x[0] * x[2]) / 2 << endl;
	cout << fixed << "CIRCULO: " << pi * (x[2] * x[2]) << endl;
	cout << fixed << "TRAPEZIO: " << ((x[0] + x[1]) * x[2]) / 2 << endl;
	cout << fixed << "QUADRADO: " << x[1] * x[1] << endl;
	cout << fixed << "RETANGULO: " << x[0] * x[1] << endl;
 
    	return 0;
}
