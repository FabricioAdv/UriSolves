#include <iostream>
 
using namespace std;
 
int main() 
{ 
    	int x[4], y; 
	
	cin >> x[0] >> x[1] >> x[2] >> x[3];
	
	y = (x[0] * x[1] - x[2] * x[3]);
	
	cout << "DIFERENCA = " << y << endl;
 
    	return 0;
}
