//Program to insert an element into an array
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ele,pos;
    printf("Enter the element to be inserted: ");
    scanf("%d",&ele);
    printf("Enter the position of insertion (0 to %d): ",n);
    scanf("%d",&pos);
    if(pos<=n && pos>=0)
    {
        for (int i = n-1; i >= pos ; i--)
            a[i+1] = a[i];
        a[pos] = ele;
        printf("Array after insertion:\n");
        for (int i = 0; i < n+1; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
        printf("Invalid position");
    return 0;
}
