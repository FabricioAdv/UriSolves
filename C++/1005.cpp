#include <iostream>
 
using namespace std;
 
int main() {
 
    double x[2], y; 
	
	cin >> x[0] >> x[1];
	
	y = (x[0] * 0.35 + x[1] * 0.75) / 1.1;
	
	cout << fixed;
	cout.precision(5);
	cout << "MEDIA = " << y << endl;
 
    return 0;
}
