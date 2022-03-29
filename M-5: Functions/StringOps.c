//Program to perform various operations on a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void length(char s[]);
void copy(char s[]);
void compare(char s1[],char s2[]);

int main()
{
    int f = 1;
    while(f)
    {
        printf("1. Length of String\n2. Copy String\n3. Compare two Strings\n4. Exit\n");
        printf("Enter your choice: ");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter a string:\n");
                char str[50];
                scanf(" %[^\n]s",str);
                length(str);
                break;
            case 2:
                printf("Enter a string to be copied:\n");
                char s[50];
                scanf(" %[^\n]s",s);
                copy(s);
                break;
            case 3:
                printf("Enter string 1:\n");
                char s1[50];
                char s2[50];
                scanf(" %[^\n]s",s1);
                printf("Enter string 2:\n");
                scanf(" %[^\n]s",s2);
                compare(s1,s2);
                break;
            case 4:
                f = 0;
                break;
            default:
                printf("Invalid Option\n\n");
                break;
        }
    }
    return 0;
}

void length(char s[])
{
    int len = strlen(s);
    printf("The length of the string is %d\n\n",len);
}

void copy(char s[])
{
    char strcopy[50] = "";
    printf("The string in variable strcopy before copying is: %s\n",strcopy);
    strcpy(strcopy,s);
    printf("The string in varialbe strcopy after copying is: %s\n\n",strcopy);
}

void compare(char s1[],char s2[])
{
    if(strcmp(s1,s2)==0)
        printf("The strings are the same\n\n");
    else
        printf("The strings are different\n\n");
}