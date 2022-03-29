//Program to remove extra blank spaces
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char cleanstr[50];
    printf("Enter a string:\n");
    fgets(str,50,stdin);
    int len = strlen(str);
    int start = 0,end = len-1,j = 0;
    for (int i = 0; i < len-1; i++)
    {
        if(str[i]!=' ')
        {
            start = i;
            break;
        }
    }
    for (int i = len-2; i >= 0; i--)
    {
        if(str[i]!=' ')
        {
            end = i;
            break;
        }
    }
    for(int i = start;i<=end;i++,j++)
    {
        cleanstr[j] = str[i];
    }
    cleanstr[j] = '\0';
    str[len-1] = '\0';
    printf("The entered string is: \"%s\"\n",str);
    printf("The clean string is: \"%s\"",cleanstr);
    return 0;
}