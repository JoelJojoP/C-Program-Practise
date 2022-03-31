//Program to accept details of people and search for them
#include<stdio.h>
#include<string.h>

struct Addbook
{
    char name[20];
    char address[50];
    long int phone;
}a[5];

void details(int i)
{
    printf("Name: %s\n",a[i].name);
    printf("Address: %s\n",a[i].address);
    printf("Phone No.: %ld\n",a[i].phone);
}

void search()
{
    while (1)
    {
        int ch;
        printf("Choose a search filter:\n");
        printf("1. By Name\n2. By Phone Number\n");
        printf("Enter your choice (Press 3 to exit): ");
        scanf("%d",&ch);
        if(ch==1)
        {
            char n[20];
            printf("Enter the name to be searched:\n");
            scanf(" %[^\n]s",n);
            int f = 0;
            for(int i =0;i<5;i++)
            {
                if(strcmp(a[i].name,n)==0)
                {
                    f=1;
                    printf("Person found\n");
                    details(i);
                }
            }
            if(f == 0)
                printf("Person not found\n");
        }
        else if(ch==2)
        {
            long int n;
            printf("Enter the phone number to be searched:\n");
            scanf("%ld",&n);
            int f = 0;
            for(int i =0;i<5;i++)
            {
                if(a[i].phone == n)
                {
                    f=1;
                    printf("Person found\n");
                    details(i);
                }
            }
            if(f == 0)
                printf("Person not found\n");
        }
        else if(ch == 3)
            break;
        else
            printf("Invalid option\n");
    }
}

int main()
{
    for(int i =0;i<5;i++)
    {
        printf("Enter the details of person %d\n",(i+1));
        printf("Name: ");
        scanf(" %[^\n]s",a[i].name);
        printf("Address: ");
        scanf(" %[^\n]s",a[i].address);
        printf("Phone No.: ");
        scanf("%ld",&a[i].phone);
        printf("\n");
    }
    search();
}
