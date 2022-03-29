//Program to calculate permutations
#include<stdio.h>

int fact(int n)
{
    int f = 1;
    for(int i = 1;i<=n;i++)
        f = f * i;
    return f;
}

int perm(int n,int r)
{
    int p = fact(n)/fact(n-r);
    return p;
}

int main()
{
    int n,r;
    printf("Enter the values of n and r:\n");
    scanf("%d%d",&n,&r);
    if(n>r)
    {
        int result = perm(n,r);
        printf("nPr = %d",result);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}