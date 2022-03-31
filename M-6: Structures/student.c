//Program to manipulate student details
#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int regno;
    float marks[6];
    float avg;
    float total;
};

void sortName(struct student s[],int len);
void sortRegno(struct student s[], int len);
void sortAvg(struct student s[], int len);
void find(struct student s[], int len);

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the details of student %d\n",(i+1));
        printf("Name: ");
        scanf(" %[^\n]s",s[i].name);
        printf("Register No.: ");
        scanf("%d",&s[i].regno);
        s[i].total = 0;
        printf("Enter the marks scored in 6 subjects:\n");
        for(int j = 0;j<6;j++)
        {
            scanf("%f",&s[i].marks[j]);
            s[i].total = s[i].total + s[i].marks[j];
        }
        s[i].avg = s[i].total/6;
        printf("\n");
    }
    sortName(s,n);
    sortAvg(s,n);
    sortRegno(s,n);
    find(s,n);
}

void sortName(struct student s[],int len)
{
    for(int i = 0;i<len-1;i++)
    {
        for(int j = i+1;j<len;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("The names of students sorted according to name:\n");
    for(int i = 0;i<len;i++)
        printf("%s\n",s[i].name);
}

void sortRegno(struct student s[],int len)
{
    for(int i = 0;i<len-1;i++)
    {
        for(int j = i+1;j<len;j++)
        {
            if(s[i].regno>s[j].regno)
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("The names of students sorted according to register no.:\n");
    for(int i = 0;i<len;i++)
        printf("%s\n",s[i].name);
}

void sortAvg(struct student s[], int len)
{
    for(int i = 0;i<len-1;i++)
    {
        for(int j = i+1;j<len;j++)
        {
            if(s[i].avg>s[j].avg)
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("The names of students sorted according to average scores:\n");
    for(int i = 0;i<len;i++)
        printf("%s\n",s[i].name);
}

void find(struct student s[], int len)
{
    int k;
    printf("Enter the register no. to be searched:\n");
    scanf("%d",&k);
    int l = 0, h = len, f = 0;
    while(l<=h)
    {
        int m = (l+h)/2;
        if(s[m].regno == k)
        {
            f = 1;
            printf("Student found\n");
            printf("____STUDENT DETAILS____\n");
            printf("Name: %s\n",s[m].name);
            printf("Register No.: %d\n",s[m].regno);
            printf("Total Marks: %.2f\n",s[m].total);
            printf("Average Marks: %.2f\n",s[m].avg);
            break;
        }
        else if(s[m].regno < k)
            l = m + 1;
        else   
            h = m - 1;
    }
    if(f == 0)
        printf("Search failed\n");
}