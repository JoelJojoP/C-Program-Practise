//Program to generate fibonacci series using recursion
#include<stdio.h>

int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
    {
        int t = fibo(n-1)+1;
        return t;
    }
    else
    {
        int temp = fibo(n-2)+fibo(n-1);
        return temp;
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The fibonacci series upto the number is:\n");
    int f = fibo(1);
    for(int i = 2;f<=num;i++)
    {
        printf("%d ",f);
        f = fibo(i);
    }
    return 0;
}