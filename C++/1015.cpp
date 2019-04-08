#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    	double x[4];
    
    	cin >> x[0] >> x[1] >> x[2] >> x[3];
    
    	cout.precision(4);
    	cout << fixed << sqrt(pow(x[2] - x[0], 2) + pow(x[3] - x[1], 2)) << endl;

	return 0;
}
