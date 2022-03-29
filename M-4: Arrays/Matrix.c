//Program to add and multiply two matrices
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the order of the square matrices:\n");
    scanf("%d",&n);
    int a[n][n], b[n][n];
    printf("Enter the elements of marix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of marix B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d",&b[i][j]);
    }
    int add[n][n], mul[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            add[i][j] = a[i][j] + b[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                mul[i][j] += a[i][k]*b[k][j];
            } 
        }
    }
    printf("A + B =\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t",add[i][j]);
        printf("\n");
    }
    printf("A * B =\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t",mul[i][j]);
        printf("\n");
    }
    return 0;
}
