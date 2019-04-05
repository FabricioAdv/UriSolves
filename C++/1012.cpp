#include <iostream>
 
using namespace std;
 
int main() {
 
    double x[3], pi;
	
	pi = 3.14159;
	
	cin >> x[0] >> x[1] >> x[2];
	
	cout << fixed;
	cout.precision(3);	
	cout << "TRIANGULO: " << (x[0] * x[2]) / 2 << endl;
	cout << "CIRCULO: " << pi * (x[2] * x[2]) << endl;
	cout << "TRAPEZIO: " << ((x[0] + x[1]) * x[2]) / 2 << endl;
	cout << "QUADRADO: " << x[1] * x[1] << endl;
	cout << "RETANGULO: " << x[0] * x[1] << endl;
 
    return 0;
}
