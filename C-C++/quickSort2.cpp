//3) Modify the partition procedure,
//so that the first element of the input list will be 
//considered as the pivot element in order to implement quick sort.
#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int lb, int ub)
{
	int pivot = arr[lb];
	int i = lb;
	for(int j = lb+1; j <= ub; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}	
	swap(arr[i], arr[lb]);
	return i;
}

void quickSort(int arr[], int lb, int ub)
{
	if(lb < ub)
	{
		int p = partition(arr, lb, ub);
		quickSort(arr, lb, p-1);
		quickSort(arr, p+1, ub);
	}
}

int main() 
{
	cout << "Enter the length of the array: ";
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter the elements: ";

	for(int i = 0; i<n ; i++)
		cin >> arr[i];

	quickSort(arr, 0, n-1);
	cout << "Sorted elements are: ";
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout<<endl;

	return 0;
}