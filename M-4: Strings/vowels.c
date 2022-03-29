//Program to find the consecutive occurence of vowels
#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    printf("Enter a string:\n");
    fgets(s,50,stdin);
    int l = strlen(s);
    s[l-1] = '\0';
    l--;
    printf("The consecutive vowels are:\n");
    for(int i = 0;i<l;i++)
    {
        char v[10];
        if(s[i] =='a'||s[i]=='e'|s[i] =='i'||s[i]=='o'||s[i]=='u')
        {
            v[0] = s[i];
            int in = 1;
            for(int j = i+1;j<l;j++)
            {
                if(s[j] =='a'||s[j]=='e'|s[j] =='i'||s[j]=='o'||s[j]=='u')
                {
                    v[in] = s[j];
                    in++;
                }
                else
                    break;
            }
            v[in] = '\0';
            if(in>1)
                printf("%s at position %d\n",v,i+1);
        }
    }
    return 0;
}
