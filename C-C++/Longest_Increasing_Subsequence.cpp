#include<bits/stdc++.h>

using namespace std;

//Fuction to find Length Of Longest Increasing Subsequence.
int Longest_Inc_Subsequence(int primary_arr[], int length)
{
    // LIS[i] - The longest increasing sub-sequence which ends with primary_arr[i] as last element
    vector<vector<int> > LIS(length);

    // LIS[0] last element is primary_arr[0]
    LIS[0].push_back(primary_arr[0]);

    /* for() loop below, stores the longest increasing substring whose last element is 
	primary_arr[i] in the LIS[i]. */
    for (int i = 1; i < length; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            if ((primary_arr[i] > primary_arr[j]) && (LIS[i].size() < LIS[j].size() + 1))
                LIS[i] = LIS[j];
        }

        LIS[i].push_back(primary_arr[i]);
    }
    // LIS[i] stores all the the increasing subsequences whose end point is primary_arr[i]

    vector<int> max = LIS[0];
   
    // max denotes maximum of all LIS in the given array.
 
    for (vector<int> x : LIS)
        if (x.size() > max.size())
            max = x;

    // max will contain LIS
    return max.size();
}


int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // funtion prints size of Longest Increasing Subsequence
    cout<<Longest_Inc_Subsequence(arr, n);

    return 0;
}