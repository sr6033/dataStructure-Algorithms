#include<iostream>

int binary_search(int k,int a[],int n)
{   int end=n-1,start=0;
while(start<=end)
{	 int m=(end+start)/2;
        if(k==a[m])
           return 1;

        else if(k<a[m])
            end=m-1;
        else if(k>a[m])
            start=m+1;
        else
            return 0;
}}
int main()
{   int a[20];
    int i,n,k,f;
    printf("enter the size of array\n");

    scanf("%d",&n);
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    printf("enter no. to search");
    scanf("%d",&k);

    f=binary_search(k,a,n);
    if(f==1)
    printf("number is found");
    else
    printf("not found");
    return 0;
}
