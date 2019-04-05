#include <iostream>

using namespace std;

int mdc(int a, int b)
{
	if(a < 0)
	{
		a = -a;
	}
		
	if(b < 0)
	{
		b = -b;
	}
		
	if(a%b == 0)
	{
		return b;
	}
	else
	{
		return mdc(b, a % b);
	}
}
 
int main()
{
	int casos;
	int n1, n2, n3, n4;
	int x1, x2, div;
	string op, div1, div2;
	
	cin >> casos;
	
	int c[casos * 2];
	
	for (int i = 0 ; i < casos * 2 ; i += 2)
	{
		cin >> n1 >> div1 >> n2 >> op >> n3 >> div2 >> n4;
		
		if (op == "+")
		{
			c[i] = n2 * n4;
			x1 = (c[i] / n2) * n1;
			x2 = (c[i] / n4) * n3;
			c[i + 1] = x1 + x2;
		}
		else if (op == "-")
		{
			c[i] = n2 * n4;
			x1 = (c[i] / n2) * n1;
			x2 = (c[i] / n4) * n3;
			c[i + 1] = x1 - x2;
		}
		else if (op == "*")
		{
			c[i] = n2 * n4;
			c[i + 1] = n1 * n3;
		}
		else if (op == "/")
		{
			c[i] = n2 * n3;
			c[i + 1] = n1 * n4;
		}
		
		div = mdc(c[i + 1], c[i]);
		
		cout << c[i + 1] << "/" << c[i] << " = " << c[i + 1] / div << "/" << c[i] / div << endl;
	}
	
    return 0;
}
