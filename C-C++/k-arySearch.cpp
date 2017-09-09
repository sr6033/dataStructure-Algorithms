#include <iostream>
using namespace std;

int k = 3;
int binarySearch(int a[], int x, int l, int r)
{
	if(l == r)
	{
		if(x == a[l])
			return l;
		else
			return -1;
	}
	else
	{
		int m1 = l+(r-l)/k;
		int m2 = r-(r-l)/k;

		if(x <= a[m1])
			return binarySearch(a, x, l, m1);
		else
			if(x <= a[m2])
				return binarySearch(a, x, m1+1, m2);
			else
				return binarySearch(a, x, m2+1, r);
	}
}

int main()
{
	int n, x;
	cin>>n;
	int a[n];

	for(int i = 0; i < n ; i++)
		cin>>a[i];

	cin>>x;

	int flag = binarySearch(a, x, 0, n-1);

	if(flag < 0)
		cout<<"Not present"<<endl;
	else
		cout<<"Present at pos: "<<flag+1<<endl;

	return 0;
}