#include <iostream>
#define INFINITY 99999
using namespace std;

int mcm(int r[], int n)
{
	int l = n - 1;
	int m[n][n];
	
	for(int i = 0; i < n; i++)
		m[i][i] = 0;

	for(int d = 1; d < n-1; d++)
	{
		for(int i = 1; i < n-d; i++)
		{
			int j = i+d;
			m[i][j] = INFINITY;
			for(int k = i; k < j; k++)
			{
				int t = m[i][k] + m[k+1][j] + r[i-1] * r[k] * r[j];
				if(t < m[i][j])
					m[i][j] = t; 
			}
		}
	}
	return m[1][l];
}

int main()
{
	int r[] = {10, 20, 50, 1, 100};
	cout << mcm(r, 5);

	return 0;
}