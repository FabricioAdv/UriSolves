#include <iostream>
 
using namespace std;
 
int main() 
{ 
     int x, y[3];

     cin >> x;
    
     y[0] = x / 365.0;
     y[1] = (((x / 365.0) - y[0]) * 365.0) / 30;
     y[2] = (((((x / 365.0) - y[0]) * 365.0) / 30) - y[1]) * 30.0 + 0.00001;
    
     cout << y[0] << " ano(s)" << endl;
     cout << y[1] << " mes(es)" << endl;
     cout << y[2] << " dia(s)" << endl;

     return 0;
}
