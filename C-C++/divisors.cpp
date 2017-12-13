#include <bits/stdc++.h>
using namespace std;

// Function to print the divisors
void printDivisors(int n)
{
    vector<int> v; 
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.push_back(i);
            else // Otherwise print both
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
 
/* Driver program to test above function */
int main()
{
    int num;
    cout<<"Enter a number : ";;
    cin>>num;
    cout<<"The divisors of "<<num<<" are : ";
    printDivisors(num);
    return 0;
}