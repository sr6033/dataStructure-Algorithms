#include <iostream>
using namespace std;

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
		int m = (l+r)/2;
		if(x <= a[m])
			return binarySearch(a, x, l, m);
		else
			return binarySearch(a, x, m+1, r);
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