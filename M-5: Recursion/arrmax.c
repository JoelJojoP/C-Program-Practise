//Program to find the highest element of an array using recursion
#include<stdio.h>
 
int Max_Ele(int a[], int n)
{
    if (n == 1)
        return a[0];
    else
    {
        int m = Max_Ele(a,n-1);
        if(a[n-1]>m)
            return a[n-1];
        else
            return m;
    }
}
 
// driver code to test above function
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The biggest element in the array is %d",Max_Ele(arr,n));
    return 0;
}