#include <iostream>
 
using namespace std;
 
int main() {
 
    double x[2];
    
    cin >> x[0] >> x[1];
    
    cout << fixed;
    cout.precision(3);
    cout << (x[0] * x[1]) / 12 << endl;
 
    return 0;
}
