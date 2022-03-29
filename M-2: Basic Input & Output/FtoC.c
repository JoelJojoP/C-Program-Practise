//Program to convert temperture in Farenheit to Centigrade
#include<stdio.h>

int main()
{
    float f,c;
    printf("Enter the value of temperature in Farenheit: ");
    scanf("%f",&f);
    c = ((f-32)*5)/9;
    printf("The value of temperature in Centigrade is %0.2f",c);
    return 0;
}
