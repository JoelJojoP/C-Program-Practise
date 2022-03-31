//Program to compare the size of a structure and union variable
#include<stdio.h>

struct s
{
    char s[10];
    int temp;
};

struct sample1
{
    int a;
    float b;
    double c;
    char d; 
    struct s t;
}s1;
union sample2
{
    int a;
    float b;
    double c;
    char d;
    struct s t;
}s2;

int main()
{
    printf("The size of the structure is %ld\n",sizeof(s1));
    printf("The size of the union with same members is %ld\n",sizeof(s2));
    return 0;
}
