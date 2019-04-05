#include <iostream>
 
using namespace std;
 
int main() 
{
 
  double x, y; 
	
	cin >> x;
	
	y = 3.14159 * (x * x);
	
	cout.precision(4);
	cout << fixed << "A=" << y << endl;
 
  return 0;
}
