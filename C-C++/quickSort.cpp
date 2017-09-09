//2) Using divide and conquer approach, 
//write a program to implement quick sort by 
//considering the last element of the list as the pivot element.
#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int lb, int ub)
{
	int pivot = arr[ub];
	int i = lb-1;
	for(int j = lb; j < ub; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}	
	swap(arr[i+1], arr[ub]);
	return(i+1);
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
	cout <<"Enter the length of the array: ";
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter the elements: ";
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	quickSort(arr, 0, n-1);
	
	cout << "Sorted elements are: ";
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout<<endl;

	return 0;
}