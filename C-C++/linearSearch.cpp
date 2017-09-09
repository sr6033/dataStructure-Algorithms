#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cin>>n;
	int a[n];

	for(int i = 0; i < n; i++)
		cin>>a[i];

	cin>>x;

	for(int i = 0; i < n; i++)
	{
		if(x < a[0] || x > a[n-1])
		{
			cout<<"<Not present>"<<endl;
			break;
		}
		else
		{
			if(x == a[i])
			{
				cout<<"Find at pos: "<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}