//Program to find the area and perimeter of a circle
#include<stdio.h>
#include<math.h>
#define pi 3.14

int main()
{
	float r,a,p;
	printf("Enter the radius of a circle: ");
	scanf("%f",&r);
	a = pi*pow(r,2);
	p = 2*pi*r;
	printf("Perimeter of the cirle is %0.2f\n",p);
	printf("Area of the circle is %0.2f",a);
	return 0;
}
