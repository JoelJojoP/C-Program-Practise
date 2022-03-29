//Program to find the sum of series 1+1/3!+1/5!+...1/n!
#include<stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
    {
       return n*fact(n-1);
    }
}

float SumofSeries(int n)
{
    if(n==1)
        return 1.0;
    else
    {
        float t = 1.0/fact((2*n)-1);
        t = t + SumofSeries(n-1);
        return t;
    }
}

int main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    float s = SumofSeries(num);
    printf("The sum of the series 1 + 1/3! + 1/5! ... + 1/n! = %.2f",s);
    return 0;
}