//Program to reverse a string and check whether it is a palindrome or not
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char rev[50];
    printf("Enter a string:\n");
    fgets(str,50,stdin);
    strcpy(rev,str);
    int l = strlen(rev);
    for(int i = 0;i<l/2;i++)
    {
        char temp = rev[i];
        rev[i] = rev[l-i-2];
        rev[l-i-2] = temp;
    }
    printf("The entered string: %s",str);
    printf("The reversed string: %s",rev);
    if (strcmp(str,rev)==0)
        printf("The string is a palindrome");
    else
        printf("The string is not palindrome");
    return 0;
}