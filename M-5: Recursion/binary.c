//Program to perform binary search using recursion
#include<stdio.h>

void bin_search(int arr[], int l, int h, int k)
{
    if(l>h)
        printf("Element not found");
    else
    {
        int m = (l+h)/2;
        if(arr[m] == k)
            printf("Element found at position %d",m);
        else if(arr[m] > k)
            bin_search(arr,l,m-1,k);
        else
            bin_search(arr,m+1,h,k);
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array (Sorted in ascending manner):\n");
    for(int i = 0;i<n;i++)
        scanf("%d",&a[i]);
    int e;
    printf("Enter the element to be searched: ");
    scanf("%d",&e);
    bin_search(a,0,n,e);
    return 0;
}