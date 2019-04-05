#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y[14]; 
	
	cin >> x;
	
	if (x > 0)
	{
		y[0] = x / 100;	
		
		if (y[0] >= 1)
		{
			y[1] = x - (y[0] * 100);
		}
		else
		{
			y[1] = x;
		}
		
		y[2] = y[1] / 50;
		
		if (y[2] >= 1)
		{
			y[3] = y[1] - (y[2] * 50);
		}
		else
		{
			y[3] = y[1];
		}
		
		y[4] = y[3] / 20;
		
		if (y[4] >= 1)
		{
			y[5] = y[3] - (y[4] * 20);
		}
		else
		{
			y[5] = y[3];
		}
		
		y[6] = y[5] / 10;
		
		if (y[6] >= 1)
		{
			y[7] = y[5] - (y[6] * 10);
		}
		else
		{
			y[7] = y[5];
		}
		
		y[8] = y[7] / 5;
		
		if (y[8] >= 1)
		{
			y[9] = y[7] - (y[8] * 5);
		}
		else
		{
			y[9] = y[7];
		}
		
		y[10] = y[9] / 2;
		
		if (y[10] >= 1)
		{
			y[11] = y[9] - (y[10] * 2);
		}
		else
		{
			y[11] = y[9];
		}
	}
	
	cout << x << endl;
	cout << y[0] << " nota(s) de R$ 100,00" << endl;
	cout << y[2] << " nota(s) de R$ 50,00" << endl;
	cout << y[4] << " nota(s) de R$ 20,00" << endl;
	cout << y[6] << " nota(s) de R$ 10,00" << endl;
	cout << y[8] << " nota(s) de R$ 5,00" << endl;
	cout << y[10] << " nota(s) de R$ 2,00" << endl;
	cout << y[11] << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}
