//Program to find distance between two points in a cartesian plane
#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,y1,y2,dis;
    printf("Enter the coordinates of point 1:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter the coordinates of point 2:\n");
    scanf("%f%f",&x2,&y2);
    dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The distance between the two points is %0.2f units",dis);
    return 0;
}
