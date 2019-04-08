#include <iostream>
 
using namespace std;
 
int main() 
{ 
    	string c;
	double x[2], y; 
	
	cin >> c;
	cin >> x[0] >> x[1];
	
	y = (x[0] + x[1] * 0.15);

	cout.precision(2);
	cout << fixed << "TOTAL = R$ " << y << endl;
 
    	return 0;
}
