#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, x;
	cout<<"Enter array size:";
	cin>>n;
	int a[n];
	cout<<"Enter elements to array:";

	for(int i = 0; i < n; i++)
		cin>>a[i];
	cout<<"Enter number to search:";
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
				cout<<"Found at pos: "<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}
