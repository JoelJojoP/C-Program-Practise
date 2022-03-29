//Program to check whether a character is a lowercase, uppercase,digit or special character
#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    int ascii = c;
    if(ascii>=48 && ascii<=57)
        printf("The entered character is a number");
    else if(ascii>=65 && ascii<=90)
        printf("The entered character is an uppercase alphabet");
    else if(ascii>=97 && ascii<=122)
        printf("The entered character is a lowercase alphabet");
    else
        printf("The entered character is a special character");
    return 0;
}
