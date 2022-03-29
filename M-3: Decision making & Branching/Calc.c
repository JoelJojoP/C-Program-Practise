//Menu driven program to demonstrate a simple calculator
#include<stdio.h>

int main()
{
    float ans;
    printf("Enter a number:\n");
    scanf("%f",&ans);
    while(1)
    {
        int ch;
        printf("Choose the operation to be performed:\n");
        printf("1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n");
        printf("Enter 5 to exit\n");
        scanf("%d",&ch);
        if(ch!=5)
        {
            float a,r;
            printf("Enter the second number:\n");
            scanf("%f",&a);
            switch (ch)
            {
            case 1:
                r = ans + a;
                printf("%0.2f + %0.2f = %0.2f",ans,a,r);
                break;
            case 2:
                r = ans - a;
                printf("%0.2f - %0.2f = %0.2f",ans,a,r);
                break;
            case 3:
                r = ans * a;
                printf("%0.2f * %0.2f = %0.2f",ans,a,r);
                break;
            case 4:
                r = ans / a;
                printf("%0.2f / %0.2f = %0.2f",ans,a,r);
                break;
            default:
                break;
            }
            printf("\n");
            ans = r;
        }
        else
        {
            printf("the final answer is %0.2f",ans);            
            break;
        }
    }
    return 0;
}
