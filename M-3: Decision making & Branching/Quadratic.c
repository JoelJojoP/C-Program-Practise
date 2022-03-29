//Program to find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter the values of a, b & c:\n");
    scanf("%f%f%f",&a,&b,&c);
    float d = (b*b)-(4*a*c);
    if(d<0)
        printf("The quadratic equation has no roots");
    else if(d==0)
    {
        float r = -1*b/(2*a);
        printf("The roots of the quadratic equation are same and is equal to %0.2f",r);
    }
    else
    {
        float r1 = ((-1*b)+sqrt(d))/(2*a);
        float r2 = ((-1*b)-sqrt(d))/(2*a);
        printf("The roots of the quadratic equation are %0.2f and %0.2f",r1,r2);
    }
    return 0;
}
