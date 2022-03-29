//Program to find area and perimeter of rectangle and circle
#include<stdio.h>
#define pi 3.14

int main()
{
    float b,l,r,recta,rectp,cira,circum;
    printf("Enter the length and breadth of the rectagle:\n");
    scanf("%f%f",&l,&b);
    printf("Enter the radius of the circle:\n");
    scanf("%f",&r);
    recta = l * b;
    rectp = 2*(l+b);
    cira = pi*r*r;
    circum = 2*pi*r;
    printf("Area of rectangle: %0.2f\n",recta);
    printf("Perimeter of rectangle: %0.2f\n",rectp);
    printf("Area of circle: %0.2f\n",cira);
    printf("Circumference of circle: %0.2f\n",circum);
    return 0;
}
