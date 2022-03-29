//Program to find the pair of numbers with largest sum in an array
#include<stdio.h>

int main()
{
    int n, n1, n2, ls = 0;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = a[i] + a[j];
            if(sum > ls)
            {
                ls = sum;
                n1 = a[i];
                n2 = a[j];
            }
        }
    }
    printf("The pair of number with the largest sum is %d and %d",n1,n2);
    return 0;
}
