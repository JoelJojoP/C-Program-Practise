//Program to find factorial of a number using recursion
#include<stdio.h>

int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d! = %d",num,fact(num));
    return 0;
}