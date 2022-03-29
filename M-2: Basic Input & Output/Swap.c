//Program to swap two numbers using temporary variables
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\na = %d\nb = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\na = %d\nb = %d\n",a,b);
    return 0;
}
