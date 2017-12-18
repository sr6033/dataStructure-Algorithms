/* 
 * This program finds the kth smallest element of an array using randomized selection algorithm.
 * It takes almost O(n) time which is better than using sorting (O(nlogn) at most) to solve it.
 * Assumption: no duplicate elements in the array.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int RSelect(vector<int>& A, int l, int r, int k)
{
	if(l >= r) return A[l];

	int index = l + rand() % (r-l+1);	//choose the pivot uniformly at random
	swap(A[l], A[index]);
	int pivot = A[l];
	int i = l+1;
	int j = l+1;

	while(j <= r)			//partition the elements around the pivot
	{
		if(A[j] < pivot)
			swap(A[i++], A[j]);
		j++;
	}
	swap(A[l], A[i-1]);

	if(i == k) return A[i-1];		//return if position of pivot is kth position
	else if(i > k)
		return RSelect(A, l, i-2, k);
	else
		return RSelect(A, i, r, k-i);
}

int main()
{
	vector<int> v;
	int n, a, k, ans;
	srand(time(nullptr));

	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "Enter the elements: ";

	for(int i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	cout << "Enter the kth smallest element to find: ";
	cin >> k;

	ans = RSelect(v, 0, n-1, k);

	switch(k)
	{
		case 1: cout << "The (1st)smallest element is: " << ans << endl;
				break;
		case 2: cout << "The 2nd smallest element is: " << ans << endl;
				break;
		case 3: cout << "The 3rd smallest element is: " << ans << endl;
				break;
		default:
				cout << "The " << k << "th smallest element is: " << ans << endl;
	}

	return 0;
}