//Program to interchange diagonals of a matrix
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the order of the square matrix:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of the marix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Before interchanging diagonal:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        int temp = a[i][i];
        a[i][i] = a[i][n-1-i];
        a[i][n-1-i] = temp;
    }
    printf("After interchanging diagonal:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}