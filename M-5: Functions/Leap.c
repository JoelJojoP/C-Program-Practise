//Program to check whether a year is leap year or not
#include<stdio.h>

void leapyear(int year);

int main()
{
    int y;
    printf("Enter an year: ");
    scanf("%d",&y);
    leapyear(y);
    return 0;
}

void leapyear(int year)
{
    if((year%4==0 && year%100!=0)||year%400==0)
        printf("The entered year is a leap year");
    else
        printf("The entered year is not a leap year");
}