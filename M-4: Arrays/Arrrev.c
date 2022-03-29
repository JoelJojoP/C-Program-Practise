//Program to read an array and reverse it
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n], rev[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
        rev[n-i-1] = a[i];
    }
    printf("\n");
    printf("The reversed array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}
