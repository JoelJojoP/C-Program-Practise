//Program to sort an array in ascending order using selection sort
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int pos = 0;
        for (int j = 1; j < n-i; j++)
        {
            if(a[j]>a[pos])
            {
                pos = j;
            }
        }
        int temp = a[pos];
        a[pos] = a[n-i-1];
        a[n-i-1] = temp;
    }
    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}