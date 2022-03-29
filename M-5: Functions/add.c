//Program to add numbers using function
#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int x,y;
    printf("Enter the values of x and y:\n");
    scanf("%d%d",&x,&y);
    int sum = add(x,y);
    printf("x + y = %d",sum);
    return 0;
}