//Program to assign grades according to the marks scored
#include<stdio.h>

int main()
{
    float m;
    printf("Enter the mark obtained by the student: ");
    scanf("%f",&m);
    if(m<40)
        printf("FAIL");
    else if(m>=40 && m<50)
        printf("E");
    else if(m>=50 && m<60)
        printf("D");
    else if(m>=60 && m<70)
        printf("C");
    else if(m>=70 && m<80)
        printf("B");
    else if(m>=80 && m<90)
        printf("A");
    else
        printf("A+");
    return 0;
}
