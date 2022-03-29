//Program to remove substring form a string
#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],rem[40],sub[10];
    printf("Enter a string:\n");
    fgets(s,50,stdin);
    printf("Enter a substring:\n");
    fgets(sub,10,stdin);
    int lm = strlen(s), ls = strlen(sub),j = 0;
    s[lm-1] = '\0';
    sub[ls-1] = '\0';
    lm--;
    ls--;
    for(int i = 0;i<lm;i++)
    {
        char temp[10];
        int in = 0;
        for(int k = i;k<i+ls;k++,in++)
            temp[in] = s[k];
        if(strcmp(sub,temp))
        {
            rem[j] = s[i];
            j++;
        }    
        else
            i = i+ls-1;
    }
    printf("String after removing substring: %s",rem);
    return 0;
}
