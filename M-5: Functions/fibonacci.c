//Program to print the fibonacci series upto n terms
#include<stdio.h>

void fibo(int t);
int main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("The fibonacci series is:\n");
    fibo(num);
    return 0;
}

void fibo(int n)
{
    int a = 0, b = 1,c;
    printf("%d %d ",a,b);
    for(int i = 3;i<=n;i++)
    {
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}