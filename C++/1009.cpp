#include <iostream>
 
using namespace std;
 
int main() {
 
    string c;
	double x[2], y; 
	
	cin >> c;
	cin >> x[0] >> x[1];
	
	y = (x[0] + x[1] * 0.15);

	cout << fixed;
	cout.precision(2);
	cout << "TOTAL = R$ " << y << endl;
 
    return 0;
}
