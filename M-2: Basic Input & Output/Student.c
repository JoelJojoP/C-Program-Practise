//Program to calculate total and average marks of student
#include<stdio.h>

int main()
{
    int roll;
    float m1,m2,m3;
    float tm, am;
    printf("Enter the roll no. of the student: ");
    scanf("%d",&roll);
    printf("Enter the marks obtained in three subjects:\n");
    scanf("%f%f%f",&m1,&m2,&m3);
    tm = m1+m2+m3;
    am = tm/3;
    printf("\nStudent Roll No.: %d\n",roll);
    printf("Marks obtained in subject 1: %0.2f\n",m1);
    printf("Marks obtained in subject 2: %0.2f\n",m2);
    printf("Marks obtained in subject 3: %0.2f\n",m3);
    printf("Total marks obtained: %0.2f\n",tm);
    printf("Average marks: %0.2f",am);
    return 0;
}