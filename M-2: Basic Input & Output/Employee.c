//Program to calculate the salary of an employee
#include<stdio.h>

int main()
{
    float bp,da,hra,gp;
    printf("Enter the basic pay of the employee: ");
    scanf("%f",&bp);
    da = 40*bp/100;
    hra = 20*bp/100;
    gp = bp+da+hra;
    printf("The gross salary of the employee is %0.2f rupees",gp);
    return 0;
}
