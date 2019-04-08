#include <iostream>
 
using namespace std;
 
int main() 
{
     int x[3], y;

     y = 0;

     for (int i = 0 ; i < 3 ; i++)
     {
         cin >> x[i];

         if (x[i] > y)
         {
             y = x[i];
         }
     }

     cout << y << " eh o maior" << endl;
 
     return 0;
}
