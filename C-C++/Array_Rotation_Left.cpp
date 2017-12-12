#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long a[100000];
    int size,rotations,j=0,testCases;
   
    cin>>testCases;
    
    while(testCases>0)
    {
        cout<<"\nEnter size and number of rotations : ";
        cin>>size>>rotations;
      
        cout<<"Enter elements : ";
        j = size-(rotations % size);
        for(int i=0;i<size;i++)
        {
       	    cin>>a[j];
            j=(j+1)%size;
        }
       
        for(int i=0;i<size;i++)
            cout<<a[i]<<" ";
	cout<<"\n";
	
	testCases--;
    }
    return 0;
}
