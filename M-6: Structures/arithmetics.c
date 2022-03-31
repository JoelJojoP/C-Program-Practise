//Program to perform various operations using structures
#include<stdio.h>

struct distance
{
    int feet;
    int inch;
};

struct complex
{
    int real;
    int imag;
};

struct time
{
    int hour;
    int min;
    int sec;
};

struct distance addDis(struct distance d1, struct distance d2);
struct complex addCom(struct complex c1, struct complex c2);
struct time diffTime(struct time et, struct time st);

int main()
{
    while (1)
    {
        int ch;
        printf("Choose an operation:\n");
        printf("1. Add two distances\n");
        printf("2. Add two complex numbers\n");
        printf("3. Difference between two time periods\n");
        printf("Enter your choice (Enter any other key to exit): ");
        scanf("%d",&ch);
        if(ch==1)
        {
            struct distance d1,d2,sum;
            printf("Enter the distance 1:\n");
            printf("Feet: ");
            scanf("%d",&d1.feet);
            printf("Inches: ");
            scanf("%d",&d1.inch);
            printf("Enter the distance 2:\n");
            printf("Feet: ");
            scanf("%d",&d2.feet);
            printf("Inches: ");
            scanf("%d",&d2.inch);
            sum = addDis(d1,d2);
            printf("The sum of the distances is %d feet and %d inches\n",sum.feet,sum.inch);
        }
        else if(ch==2)
        {
            struct complex n1,n2,sum;
            printf("Enter the first complex number (in the format x+/-yi):\n");
            scanf("%d%di",&n1.real,&n1.imag);
            printf("Enter the second complex number (in the format x+/-yi):\n");
            scanf("%d%di",&n2.real,&n2.imag);
            sum = addCom(n1,n2);
            printf("The sum of the complex numbers is %d%di\n",sum.real,sum.imag);
        }
        else if(ch==3)
        {
            struct time t1,t2,diff;
            printf("Enter the starting time period (in the format h:m:s):\n");
            scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
            printf("Enter the ending time period (in the format h:m:s):\n");
            scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
            diff = diffTime(t2,t1);
            printf("The difference between the two time periods is %d hours %d minutes and %d seconds\n",diff.hour,diff.min,diff.sec);
        }
        else
            break;
        printf("\n");
    }
}

struct distance addDis(struct distance d1, struct distance d2)
{
    struct distance d;
    d.feet = d1.feet + d2.feet;
    d.inch = d1.inch + d2.inch;
    d.feet = d.feet + (d.inch/12);
    d.inch = d.inch%12;
    return d;
}

struct complex addCom(struct complex c1, struct complex c2)
{
    struct complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}

struct time diffTime(struct time et, struct time st)
{
    struct time t;
    t.sec = et.sec - st.sec;
    t.min = et.min - st.min;
    t.hour = et.hour - st.hour;
    if(t.sec<0)
    {
        t.sec = t.sec + 60;
        t.min = t.min - 1;
    }
    if(t.min<0)
    {
        t.min = t.min + 60;
        t.hour = t.hour - 1;
    }
    return t;
}