#include <iostream>
 
using namespace std;
 
int main() {
 
    double x[3], y; 
	
	cin >> x[0] >> x[1] >> x[2];
	
	y = (x[0] * 0.2 + x[1] * 0.3 + x[2] * 0.5);
	
	cout << fixed;
	cout.precision(1);
	cout << "MEDIA = " << y << endl;
 
    return 0;
}
