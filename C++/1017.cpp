#include <iostream>
 
using namespace std;
 
int main() 
{ 
     double x[2];
    
     cin >> x[0] >> x[1];
    
     cout.precision(3);
     cout << fixed << (x[0] * x[1]) / 12 << endl;
 
     return 0;
}
