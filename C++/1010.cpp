#include <iostream>
 
using namespace std;
 
int main() {
 
    double x[6], y; 
	
	cin >> x[0] >> x[1] >> x[2];
	cin >> x[3] >> x[4] >> x[5];
	
	y = (x[1] * x[2] + x[4] * x[5]);

	cout << fixed;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << y << endl;
 
    return 0;
}
