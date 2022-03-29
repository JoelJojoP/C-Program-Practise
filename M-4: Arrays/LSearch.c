//Program to perform linear search
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ele, pos = -1;
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    for(int i = 0;i<n;i++)
    {
        if(a[i]==ele)
        {
            pos = i;
            break;
        }
    }
    if(pos>-1)
        printf("The element is located at position %d",pos);
    else
        printf("Element not found");
    return 0;
}
