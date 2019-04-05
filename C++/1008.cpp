#include <iostream>
 
using namespace std;
 
int main() {
 
    double x[3], y; 
	
	cin >> x[0] >> x[1] >> x[2];
	
	y = (x[1] * x[2]);
	
	cout << "NUMBER = " << x[0] << endl;
	
	cout << fixed;
	cout.precision(2);
	cout << "SALARY = U$ " << y << endl;
 
    return 0;
}
