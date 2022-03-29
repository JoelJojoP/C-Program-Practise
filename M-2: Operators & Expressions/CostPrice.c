//Program to find cost price from selling price and profit
#include<stdio.h>

int main()
{
    float sp,cp,profit,cpper;
    printf("Enter the selling price and total profit of 15 items:\n");
    scanf("%f%f",&sp,&profit);
    cp = sp - profit;
    cpper = cp/15;
    printf("The cost price of each item is %0.2f rupees",cpper);
    return 0;
}
