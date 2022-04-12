//Program to print the greatest of N numbers
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    printf("Enter the array elements:\n");
    for(int i = 0;i<n;i++)
        scanf("%d",arr+i);
    int max = *(arr);
    for(int i = 0;i<n;i++)
    {
        if(*(arr+i) > max)
            max = *(arr+i);
    }
    printf("The biggest element is %d",max);
    free(arr);
    return 0;
}