//Program to sort the alphabets in a string
#include<stdio.h>
#include<string.h>

void sort(char* s);

int main()
{
    char str[50];
    printf("Enter a string:\n");
    fgets(str,50,stdin);
    sort(str);
    printf("%s\n",str);
}

void sort(char* s)
{
    s[strlen(s)-1] = '\0';
    for(int i =0;i<(strlen(s)-1);i++)
    {
        for(int j = i+1;j<strlen(s);j++)
        {
            if(s[i]>s[j])
            {
                char c = s[j];
                s[j] = s[i];
                s[i] = c;
            }
        }
    }
    for(int i = 0;i<(strlen(s)-1);i++)
    {
        if(s[i]==s[i+1])
        {
            for(int j = i+1;j<strlen(s);j++)
                s[j-1] = s[j];
            s[strlen(s)-1] = '\0';
        }
    }
}