//Program to input and display the details of a book
#include<stdio.h>

struct books
{
    char title[50];
    char author[20];
    long int isbn;
    float price;
};

int main()
{
    struct books b;
    printf("Enter the title of the book:\n");
    scanf("%[^\n]s",b.title);
    printf("Enter the author of the book:\n");
    scanf(" %[^\n]s",b.author);
    printf("Enter the ISBN number of the book:\n");
    scanf("%ld",&b.isbn);
    printf("Enter the price of the book:\n");
    scanf("%f",&b.price);
    printf("\n_____BOOK DETAILS_____\n");
    printf("Title: %s\n",b.title);
    printf("Author: %s\n",b.author);
    printf("ISBN Code: %ld\n",b.isbn);
    printf("Price: %.2f",b.price);
    return 0;
}
