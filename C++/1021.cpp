#include <iostream>
 
using namespace std;
 
int main() {
 
    double valor;
    int x[12], y[12], notas, moedas;

    cin >> valor;
    
    notas = valor;
    moedas = (valor - notas) * 100;
    
    x[0] = notas / 100;
    y[0] = notas % 100;
    
    x[1] = y[0] / 50;
    y[1] = y[0] % 50;
    
    x[2] = y[1] / 20;
    y[2] = y[1] % 20;
    
    x[3] = y[2] / 10;
    y[3] = y[2] % 10;
    
    x[4] = y[3] / 5;
    y[4] = y[3] % 5;
    
    x[5] = y[4] / 2;
    y[5] = y[4] % 2;
    
    x[6] = y[5];
    y[6] = y[5];
    
    x[7] = moedas / 50;
    y[7] = moedas % 50;
    
    x[8] = y[7] / 25;
    y[8] = y[7] % 25;
    
    x[9] = y[8] / 10;
    y[9] = y[8] % 10;
    
    x[10] = y[9] / 5;
    y[10] = y[9] % 5;
    
    x[11] = y[10];
    
    cout << "NOTAS:" << endl;
	cout << x[0] << " nota(s) de R$ 100.00" << endl;
	cout << x[1] << " nota(s) de R$ 50.00" << endl;
	cout << x[2] << " nota(s) de R$ 20.00" << endl;
	cout << x[3] << " nota(s) de R$ 10.00" << endl;
	cout << x[4] << " nota(s) de R$ 5.00" << endl;
	cout << x[5] << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << x[6] << " moeda(s) de R$ 1.00" << endl;
	cout << x[7] << " moeda(s) de R$ 0.50" << endl;
	cout << x[8] << " moeda(s) de R$ 0.25" << endl;
	cout << x[9] << " moeda(s) de R$ 0.10" << endl;
	cout << x[10] << " moeda(s) de R$ 0.05" << endl;
	cout << x[11] << " moeda(s) de R$ 0.01" << endl;
 
    return 0;
}
