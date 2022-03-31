//Program to manipulate supermarket data
#include<stdio.h>

struct item
{
    int no;
    float price;
    int stock;
    char name[20];
};

int main()
{
    int n;
    printf("Enter the number of items: ");
    scanf("%d",&n);
    struct item it[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the details of item %d:\n",(i+1));
        printf("Item Name: ");
        scanf(" %[^\n]s",it[i].name);
        printf("Item Number: ");
        scanf("%d",&it[i].no);
        printf("Quantity: ");
        scanf("%d",&it[i].stock);
        printf("Unit Price: ");
        scanf("%f",&it[i].price);
        printf("\n");
    }
    printf("The list of items with unit price greater than Rs. 129 are:\n");
    for(int i = 0;i<n;i++)
    {
        if(it[i].price>129)
            printf("%s\n",it[i].name);
    }
    printf("\n");
    printf("The list of items with quantity in stock less than 5 are:\n");
    for(int i = 0;i<n;i++)
    {
        if(it[i].stock<5)
            printf("%s\n",it[i].name);
    } 
    return 0;
}
