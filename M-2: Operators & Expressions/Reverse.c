//Program to reverse a five digit number
#include<stdio.h>

int main()
{
    int n;
    int rn = 0;
    printf("Enter a five digit number:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        d = n%10;
        rn = (rn * 10) + d;
        n = n / 10;
    }
    printf("Reverse of number = %d",rn);
    return 0;
}