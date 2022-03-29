//Program to count the palindrom numbers in an array
#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int r = 0, num = a[i];
        while (num>0)
        {
            int d = num % 10;
            r = (r*10) + d;
            num = num / 10;
        }
        if(r == a[i])
            count++;
    }
    if (count>0)
        printf("There are %d palindromes in the array",count);
    else
        printf("There are no palindromes in the array");
    return 0;
}
