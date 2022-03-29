//Program to convert an array of decimal numbers to binary numbers
#include<stdio.h>
#include<math.h>

long convert(int n);

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    long bin = convert(num);
    printf("The binary equivalent of the number is %ld\n",bin);
    return 0;
}

long convert(int n)
{

    long b = 0,i = 0;
    while(n!=0)
    {
        int r  = n%2;
        b = (r*pow(10,i))+b;
        n = n/2;
        i++;
    }
    return b;
}