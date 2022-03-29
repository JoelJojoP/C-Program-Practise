//Program to perform binary search
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array (ascending):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ele, pos = -1;
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    int ll = 0, ul = n-1,mid;
    while (ll<=ul)
    {
        mid = (ll+ul)/2;
        if(a[mid] == ele)
        {
            pos = mid;
            break;
        }
        else if (a[mid] > ele)
            ul = mid-1;
        else
            ll = mid+1;
    }
    if(pos>-1)
        printf("The element is located at position %d",pos);
    else
        printf("Element not found");
    return 0;
}
