//Program to calculate the value of the expression y = x^1+x^2+...x^n
#include<stdio.h>
#include<math.h>

int expr(int x,int n);

int main()
{
    int x,n;
    printf("Enter the values of x and n:\n");
    scanf("%d%d",&x,&n);
    int result = expr(x,n);
    printf("The value of the expression x^1+x^2+x^3... is %d",result);
    return 0;
}

int expr(int x,int n)
{
    int sum = 0;
    for(int i = 1;i<=n;i++)
    {
        sum = sum + pow(x,i);
    }
    return sum;
}