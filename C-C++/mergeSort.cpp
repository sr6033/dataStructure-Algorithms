//1) Write a program to implement merge sort using divide and conquer approach.
#include <iostream>
using namespace std;

int n;
void merge(int a[], int start, int mid, int end)
{ 
    int n1 = mid-start+1;
    int n2 = end-mid;
    int l[n1],r[n2];
    int i,j;
    
    for(i = 0; i < n1; i++)
        l[i] = a[start+i];
    for(j = 0; j < n2; j++)
        r[j] = a[mid+1+j];

    i = 0; j = 0;
    int k = start;
    while(i < n1 && j < n2)
    {
        if(l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        a[k] = l[i];
        k++; i++;
    }
    while(j < n2)
    {
        a[k] = r[j];
        k++; j++;
    }
}
void mergesort(int a[],int start,int end)
{
    if(start < end)
    {
        int mid = (start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);

        merge(a,start,mid,end);
    }
}
int main()
{
	cout<<"Enter the length: ";
    cin>>n;
    int a[n];
     int i;
    for(i = 0; i < n; i++)
        cin>>a[i];

    mergesort(a,0,n-1);

    cout<<"Sorted Array: ";
    for(i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}