//Program to print the frequencies of characters in a string
#include<stdio.h>
#include<string.h>

void count(char* str)
{
    int count[127];
    for(int i = 0;i<127;i++)
        *(count+i) = 0;
    for(int i = 0;i<strlen(str);i++)
    {
        count[*(str+i)]++;
    }
    for(int j = 33;j<127;j++)
    {
        if(*(count+j)!=0)
            printf("%c: %d\n",j,*(count+j));
    }
}
int main()
{
    char s[50];
    printf("Enter a string:\n");
    scanf("%[^\n]s",s);
    count(s);
    return 0;
}