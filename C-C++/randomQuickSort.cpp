//4) Randomly select any element as the pivot element of an input list.
//Modify the partition procedure accordingly to implement quicksort.
#include <iostream>
#include <algorithm>
using namespace std;

int partition(int* arr, int lb, int ub)
{
    int pivot_index = lb + rand() % (ub - lb + 1);
    cout<<pivot_index<<endl;
    int pivot = arr[pivot_index];

    swap(arr[pivot_index ], arr[ub]);
    pivot_index = ub;
    int i = lb -1;

    for(int j = lb; j <= ub - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[pivot_index]);
    return i + 1;
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
	srand(time(0));
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