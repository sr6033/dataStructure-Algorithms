#include <iostream>
#include <chrono>
#include <limits.h>

#define INF -1

using namespace std;
using namespace std::chrono;

int main(int argc, char*argv[])
{
	int size;

	cin >> size; 

	int data[size][size], distance[size][size];

	int datapoint;

	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			cin >> datapoint;
			data[x][y] = datapoint;
			distance[x][y] = datapoint;
		}
	}
		int a, b, c;

		high_resolution_clock::time_point time1 = high_resolution_clock::now();

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				for (c = 0; c < size; c++)
				{
					if (distance[b][a] + distance[a][c] < distance[b][c])
					{
						distance[b][c] = distance[b][a] + distance[a][c];
					}
				}
			}
		}

		high_resolution_clock::time_point time2 = high_resolution_clock::now();
		duration<double> runningtime = duration_cast<duration<double>>(time2 - time1);

		cout << "Given graph of size:  " << size << ".  Total number of nodes compared: " << size*size << endl;

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << distance[i][j];
				cout << " ";
			}
			cout << "\n";
		}

	return 0;
}