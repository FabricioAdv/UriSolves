#include <iostream>
 
using namespace std;
 
int main() 
{ 
     double x[2], y;

     cin >> x[0] >> x[1];
    
     y = x[0] / x[1];
    
     cout.precision(3);
     cout << fixed << y << " km/l" << endl;
 
     return 0;
}
