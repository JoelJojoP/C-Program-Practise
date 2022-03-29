//Program to find the length of a String without a library
#include<stdio.h>

int main()
{
    char s[50];
    int len = 0;
    printf("Enter a String:\n");
    fgets(s,50,stdin);
    for(int i = 0;i<20;i++)
    {
        if(s[i]=='\0')
            break;
        else
            ++len;
    }
    printf("The length of the string is: %d",len-1);
    return 0;
}