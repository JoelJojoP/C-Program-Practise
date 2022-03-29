//Program to find the lcm and gcd of two numbers
#include<stdio.h>

int main()
{
    int n1,n2,lcm,gcd;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    for (int i = (n1<n2?n1:n2);i>=1; i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd = i;
            break;
        }
    }
    lcm = (n1*n2)/gcd;
    printf("The LCM is %d\n",lcm);
    printf("The GCD is %d",gcd);
    return 0;
}
