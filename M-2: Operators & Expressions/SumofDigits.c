//Program to find sum of digits of a five digit number
#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter a five digit number:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        d = n%10;
        sum = sum + d;
        n = n / 10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}
