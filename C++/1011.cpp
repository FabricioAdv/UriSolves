#include <iostream>
 
using namespace std;
 
int main() {
 
    double x, y, pi;
	
	pi = 3.14159;
	
	cin >> x;
	
	y = (4/3.0) * pi * (x * x * x);
	
	cout << fixed;
	cout.precision(3);	
	cout << "VOLUME = " << y << endl;
 
    return 0;
}
