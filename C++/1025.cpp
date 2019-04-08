#include <iostream>

using namespace std;

void quick_sort(int vetor[], int inicio, int fim)
{
   	int pivo, aux, i, j, meio;
   
   	i = inicio;
   	j = fim;
   
   	meio = (int) ((i + j) / 2);
   	pivo = vetor[meio];
   
   	do
	{
      	while (vetor[i] < pivo)
		{
			i = i + 1;	
		} 
      	while (vetor[j] > pivo)
		{
			j = j - 1;
		} 
      
      	if(i <= j)
		{
         	aux = vetor[i];
         	vetor[i] = vetor[j];
         	vetor[j] = aux;
         	i = i + 1;
         	j = j - 1;
      	}
   	}while(j > i);
   
   	if(inicio < j)
   	{
   		quick_sort(vetor, inicio, j);
	}
	
   	if(i < fim)
	{
	   	quick_sort(vetor, i, fim);
	}    
}

int main()
{
	bool enc = false;
	int casos, consultas, cont = 1;
	
	while (1)
	{
		cin >> casos >> consultas;
		
		if ((casos == 0) and (consultas == 0))
		{
			break;
		}
		else
		{
			int ca_num[casos];
			int co_num[consultas];
		
			for (int i = 0 ; i < casos ; i++)
			{
				cin >> ca_num[i];
			}
	
			for (int i = 0 ; i < consultas ; i++)
			{
				cin >> co_num[i];
			}
			
			quick_sort (ca_num, 0, casos -1);
			
			cout << "CASE# " << cont << ":" << endl;
			
			for (int i = 0 ; i < consultas ; i++)
			{
				for (int j = 0 ; j < casos ; j++)
				{
					if ((co_num[i] == ca_num[j]) and !enc)
					{
						cout << co_num[i] << " found at " << j + 1 << endl;
						enc = true;
					}
				}
				
				if (enc)
				{
					enc = false;
				}
				else
				{
					cout << co_num[i] << " not found" << endl;
				}
			}
		}
		
		cont++;		
	}
	
    	return 0;
}
