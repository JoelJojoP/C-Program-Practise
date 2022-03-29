//Program to find the product of digits of a number till one digit
#include<stdio.h>

void ProductToSingle(int n);

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    ProductToSingle(num);
    return 0;
}

void ProductToSingle(int n)
{
    while(n>=10)
    {
        int p = 1;
        while(n!=0)
        {
            int d = n%10;
            p = p*d;
            n = n/10;
        }
        n = p;
    }
    printf("%d\n",n);
}