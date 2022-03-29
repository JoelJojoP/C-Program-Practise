//Program to evaluate the expression 1+(x^2)/2!+(x^3)/3!+....+(x^n)/n!
#include<stdio.h>
#include<math.h>

int main()
{
    int x,n;
    printf("Enter the value of x and n:\n");
    scanf("%d%d",&x,&n);
    float sum = 1;
    for (int i = 2; i <= n; i++)
    {
        int fact = 1;
        for (int j = 2; j <= i; j++)
        {
            fact = fact * j;
        }
        
        float temp = pow(x,i)/fact;
        sum = sum + temp;
    }
    printf("1+(x^2)/2!+(x^3)/3!+...+(x^n)/n! = %0.2f",sum);
    return 0;
}