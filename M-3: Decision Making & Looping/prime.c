//Program to find the prime and composite numbers in a given range
#include<stdio.h>

int main()
{
    int start,stop;
    printf("Enter the starting and ending number of the range:\n");
    scanf("%d%d",&start,&stop);
    for (int i = start; i <= stop; i++)
    {
        int f = 1;
        if(i>1)
        {
            for (int j = 2; j < i; j++)
            {
                if(i%j==0)
                    f = 0;
            }
            if(f)
                printf("%d - prime\n",i);
            else
                printf("%d - composite\n",i);
        }
        else
            printf("%d - neither prime nor composite\n",i);
    }
    
    return 0;
}
