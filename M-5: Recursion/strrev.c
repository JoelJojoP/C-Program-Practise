//Program to reverse a string using recursion
#include<stdio.h>
#include<string.h>

void rev(char* s,int pos)
{
    int l = strlen(s);
    if(pos <= (l/2)-1)
    {
        rev(s,pos+1);
        char t = s[pos];
        s[pos] = s[l-pos-1];
        s[l-pos-1] = t; 
    }
}

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    rev(str,0);
    printf("Reverse of the string is: %s",str);
    return 0;
}