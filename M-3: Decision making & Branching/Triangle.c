//Program to find whether a triangle can be drawn given the sides
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter the sides of the triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>=(b+c))
        printf("No triangle is possible with these sides");
    else if(a==b && b==c)
        printf("The sides form an equilateral triangle");
    else if(a==b || b==c || c==a)
        printf("The sides form an isosceles triangle");
    else if(pow(a,2)==(pow(b,2)+pow(c,2)))
        printf("The sides form a right angle triangle");
    else if(pow(a,2)>(pow(b,2)+pow(c,2)))
        printf("The sides form an obtuse triangle");
    else if(pow(a,2)<(pow(b,2)+pow(c,2)))
        printf("The sides form an acute triangle");
    else
        printf("The sides form a scalene triangle");
    return 0;
}
