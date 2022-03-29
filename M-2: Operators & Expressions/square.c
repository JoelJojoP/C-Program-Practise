//Program to find square and square root of a numbers from 0 to 100 in steps of 10
#include<stdio.h>
#include<math.h>

int main()
{
    float s,sr;
    for (int i = 0; i <= 100; i = i+10)
    {
        s = pow(i,2);
        sr = sqrt(i);
        printf("Squre of %d is %0.2f and square root is %0.2f\n",i,s,sr);
    }
    return 0;
}
