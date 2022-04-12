//Program to perform various operations on string
#include<stdio.h>

int len(char *str)
{
    int l = 0;
    int i = 0;
    while (*(str+i)!='\0')
    {
        l++;
        i++;
    }
    return l;
}

void concat(char *str1, char *str2)
{
    int l1 = len(str1);
    int l2 = len(str2);
    int j = l1;
    for(int i = 0;i<=l2;i++,j++)
        *(str1+j) = *(str2+i);
}

int comp(char *str1, char *str2)
{
    int f = 0;
    int l1 = len(str1);
    int l2 = len(str2);
    if(l1 == l2)
    {
        for(int i = 0;i<l1;i++)
        {
            if(*(str1+i) != *(str2+i))
            {
                f = 0;
                break;
            }
            else   
                f = 1;
        }
    }
    return f;
}

void copy(char *dest, char *source)
{
    int l = len(source);
    int i = 0;
    do
        *(dest+i) = *(source+i);
    while(i++<l);
}

void rev(char *str)
{
    int l = len(str);
    for(int i = 0;i<l/2;i++)
    {
        char t = *(str+i);
        *(str+i) = *(str+l-i-1);
        *(str+l-i-1) = t;
    }
}

int main()
{
    while (1)
    {
        int ch;
        char s1[50], s2[50];
        printf("Enter your choice:\n");
        printf("1. Concatenation\n2. Compare\n3. Length\n");
        printf("4. Copy\n5. Reverse\nAny other key to exit\n");
        scanf("%d",&ch);
        if(ch == 1)
        {
            printf("Enter the first string:\n");
            scanf(" %[^\n]s",s1);
            printf("Enter the second string:\n");
            scanf(" %[^\n]s",s2);
            concat(s1,s2);
            printf("The string after concatenation is\n%s\n\n",s1);
        }
        else if(ch == 2)
        {
            printf("Enter the first string:\n");
            scanf(" %[^\n]s",s1);
            printf("Enter the second string:\n");
            scanf(" %[^\n]s",s2);
            if(comp(s1,s2))
                printf("Both the strings are the same\n\n");
            else
                printf("Both the strings are different\n\n");
        }
        else if(ch == 3)
        {
            printf("Enter a string:\n");
            scanf(" %[^\n]s",s1);
            printf("The length of the string is %d\n\n",len(s1));
        }
        else if(ch == 4)
        {
            printf("Enter the source string:\n");
            scanf(" %[^\n]s",s1);
            copy(s2,s1);
            printf("The string copied to variable s2 is:\n%s\n\n",s2);
        }
        else if(ch == 5)
        {
            printf("Enter a string:\n");
            scanf(" %[^\n]s",s1);
            rev(s1);
            printf("The reversed string is\n%s\n\n",s1);
        }
        else
            break;
    }
    return 0;
}