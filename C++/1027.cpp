#include <iostream>
#include <cmath>
#include<bits/stdc++.h> 

using namespace std;

int aux[1005];

bool sort_comp (const pair<int,int> &a, const pair<int,int> &b) 
{
	if (a.first < b.first)
	{
		return true;
	}
	
    	return false; 
}

int verf (vector < pair <int, int> > num, int casos, int y)
{
	int max_n = 1, necess;
	
	for (int i = 0 ; i < casos ; i++)
	{
		aux[i] = 1;
	}
	
	for (int i = 1 ; i < casos ; i++)
	{
		if (num[i].second == y + 1)
		{
			necess = y - 1;
		}
		else if (num[i].second == y - 1)
		{
			necess = y + 1;
		}
		else
		{
			continue;
		}
		
		for (int j = 0 ; j < i ; j++)
		{
			if ((num[i].first > num[j].first) and (num[j].second == necess) and (aux[j] + 1 > aux[i]))
			{
				aux[i] = aux[j] + 1;
			}
		}
		
		max_n = max(max_n, aux[i]);
	}
	
	return max_n;
}

int main ()
{	
	int casos;
	
	while (cin >> casos)
	{
		int min_n = -1000, max_n = 1000;
		int rs = 1;
		
		vector < pair <int, int> > num;
		
		for (int i = 0 ; i < casos ; i++)
		{
			int x, y;
			cin >> x >> y;
			
			min_n = min(min_n, y);	
			max_n = max(max_n, y);
			
			num.push_back(make_pair(x, y));
		}
		
		sort(num.begin(), num.end(), sort_comp);
		
		for (int i = min_n + 1 ; i < max_n ; i++)
		{
			rs = max(verf(num, casos, i), rs);
		}
		
		cout << rs << endl;
	}
	
    	return 0;
}
