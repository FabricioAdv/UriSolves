#include <iostream>
 
using namespace std;
 
int main() 
{
     int x, y[3];
     double aux;

     cin >> x;
    
     y[0] = x / 3600.0;
     y[1] = ((x / 3600.0) - y[0]) * 60.0;
     y[2] = ((((x / 3600.0) - y[0]) * 60) - y[1]) * 60.0 + 0.0001;
    
     cout << y[0] << ":" << y[1] << ":" << y[2] << endl;
 
     return 0;
}
