//Program to find reverse & sum of digits of a number
#include<stdio.h>

int main()
{
    int n;
    int d;
    int sum = 0;
    int rn = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        d = n%10;
        sum = sum + d;
        rn = (rn * 10) + d;
        n = n / 10;
    }
    printf("Reverse of the number is %d\n",rn);
    printf("Sum of digits = %d",sum);
    return 0;
}