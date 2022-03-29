//Program to calculate Simple Interet and Compound Interest
#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,t;                
    printf("Enter the principal amount, rate and time period:\n");
    scanf("%f%f%f",&p,&r,&t);        
    float si = (p*r*t)/100;          
    float ci = (p*pow((1+(r/100)),t))-p;     
    printf("The simple interest is %0.2f rupees\n",si);
    printf("The compound interest is %0.2f rupees",ci);
    return 0;
}