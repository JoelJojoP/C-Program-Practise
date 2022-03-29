//Program to convert distance from km to m, cm, ft and in
#include<stdio.h>

int main()
{
    float km,cm,m,ft,in;
    printf("Enter the distance between the two cities in km:\n");
    scanf("%f",&km);
    m = km * 1000;
    cm = m * 100;
    ft = m * 3.281;
    in = m * 39.37;
    printf("Distance between two cities in meters: %0.2fm\n",m);
    printf("Distance between two cities in centimeter: %0.2fcm\n",cm);
    printf("Distance between two cities in feet: %0.2fft\n",ft);
    printf("Distance between two cities in inches: %0.2fin\n",in);
    return 0;
}