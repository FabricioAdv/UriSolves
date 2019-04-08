#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	char cCasos[1001], cEnt[256];
	int iCasos;
	string sAux = "", sCasos = "", sEntrada = "";
	
	cin.getline(cCasos, 256);
	sCasos = cCasos;
	
	istringstream iss (sCasos);
	
	iss >> iCasos;
	
	for (int i = 0 ; i < iCasos ; i++)
	{
		cin.getline(cEnt, 1001);
		sEntrada = cEnt;
		
		for (int j = 0 ; j < sEntrada.length() ; j++)
		{
			char cA = sEntrada[j];
			
			if (((cA >= 65) and (cA <= 90)) or ((cA >= 97) and (cA <= 122)))
			{
				char cA = sEntrada[j] + 3;
				sAux += cA;
			}
			else
			{
				sAux += cA;
			}
		}
		
		sEntrada = sAux;
		sAux = "";
		
		for (int j = sEntrada.length() - 1 ; j >= 0 ; j--)
		{
			char cA = sEntrada[j];
			sAux += cA;
		}
		
		sEntrada = sAux;
		sAux = "";	
		
		for (int j = 0 ; j < sEntrada.length() ; j++)
		{			
			if (j > (sEntrada.length() / 2 - 1))
			{
				char cA = sEntrada[j] - 1;
				sAux += cA;
			}
			else
			{
				char cA = sEntrada[j];
				sAux += cA;
			}
		}
		
		sEntrada = sAux;
		sAux = "";	
		
		cout << sEntrada << endl;
	}
	
    return 0;
}
