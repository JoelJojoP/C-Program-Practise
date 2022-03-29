//Program to toggle case in a string
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter a string:\n");
    fgets(str,50,stdin);
    for(int i = 0;i<strlen(str);i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    printf("The string after toggling case: %s",str);
    return 0;
}