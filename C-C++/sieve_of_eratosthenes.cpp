#include <iostream>
#include <math.h>

using namespace std;

int primes[10000000];

int main()
{
	int n;
	cout << "Enter a number upto which prime numbers will be generated: ";
	cin >> n;
	
	for(int i = 0; i <= n; i++)		//assume all the numbers in the range be prime i.e. set to 1
		primes[i] = 1;

	primes[0] = primes[1] = 0;		//we know 0 and 1 are not primes, set them to 0

	for(int i = 0; i <= sqrt(n); i++)
	{
		if(primes[i] == 1)
		{
			for(int j = 2; i*j <= n; j++)	//if you find a prime, set all its multiples within the range to 0
				primes[i*j] = 0;
		}
	}

	cout << "Primes numbers in the range are: " << endl;
	
	//remaining indexes with value 1 will be primes in the range
	for(int i = 0; i < n; i++)
	{
		if(primes[i] == 1)
			cout << i << endl;
	}

	return 0;
}