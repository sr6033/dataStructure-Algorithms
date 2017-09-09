#include <iostream>
using namespace std;

int b[70][70];
int lcs_length(char x[], char y[], int m, int n)
{
	int c[m+1][n+1];
	for(int i = 0; i < m; i++)
		c[i][0] = 0;
	for(int j = 0; j < m; j++)
		c[0][j] = 0;

	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(x[i] == y[j])
			{	c[i][j] = c[i-1][j-1] + 1;
				b[i][j] = 1;
			}
			else
			{
				if(c[i-1][j] >= c[i][j-1])
				{
					c[i][j] = c[i-1][j];
					b[i][j] = 2;
				}
				else
				{
					c[i][j] = c[i][j-1];
					b[i][j] = 0;
				}
			}
		}
	}
	return c[m][n];
}

void print_lcs(char x[], int i, int j)
{
	if(i == 0 || j == 0)
		return;

	if(b[i][j] == 1)
	{
		print_lcs(x, i-1, j-1);
		cout << x[i-1];
	}
	else
		if(b[i][j] == 0)
			print_lcs(x, i-1, j);
	else
		print_lcs(x, i, j-1);
}

int main()
{
	char x[] = {'A','B','C','B','D','A','B'}, y[] = {'B','D','C','A','B','A'};
	cout << lcs_length(x, y, 7, 6) << endl;
	print_lcs(x, 7, 6);

	return 0;
}