//Program to sort names in alphabetical order
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter the number of names: ");
    scanf("%d",&n);
    char *name = (char*)malloc(n*50*sizeof(char));
    printf("Enter the names:\n");
    for(int i = 0;i<n*50;i+=50)
        scanf(" %s",name+i);
    for(int i = 0;i<(n-1)*50;i+=50)
    {
        for(int j = i+50;j<n*50;j+=50)
        {
            if(strcmp(name+i,name+j)>0)
            {
                char t[50];
                strcpy(t,name+i);
                strcpy(name+i,name+j);
                strcpy(name+j,t);
            }
        }
    }
    printf("The names after sorting are:\n");
    for(int i = 0;i<n*50;i+=50)
        printf("%s\n",name+i);
    free(name);
    return 0;
}