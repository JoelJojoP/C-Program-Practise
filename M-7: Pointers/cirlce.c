//Program to find area and circumference of a circle
#include<stdio.h>
#define pi 3.14

float area(float *r)
{
    float a  = pi*(*r)*(*r);
    return a;
}

float circ(float *r)
{
    float c = 2*pi*(*r);
    return c;
}

int main()
{
    float rad;
    printf("Enter the radius of the circle: ");
    scanf("%f",&rad);
    printf("Circumference of the circle is %.2f\n",circ(&rad));
    printf("Area of the circle is %.2f\n",area(&rad));
    return 0;
}