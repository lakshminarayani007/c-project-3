#include<stdio.h>
#include<stdlib.h>
struct student
{
char name[20];
int rollno;
int marks;
char city[20];
char dream[20];
};

void read (struct student s[],int n)
{
int i;
for(i = 0;i < n;i++)
{
printf("student %d\n",i+1);

printf("enter your name");
scanf("%s",&s[i].name);
printf("enter your rollno");
scanf("%d",&s[i].rollno);
printf("enter your marks");
scanf("%d",&s[i].marks);
printf("enter your city");
scanf("%s",&s[i].city);
printf("enter your dream");
scanf("%s",&s[i].dream);
}
}

void write(struct student s[],int n)
{
int i;
for(i=1;i<=n;i++);
printf("1.name: %s\n",s[i].name);
printf("2.rollno: %d\n",s[i].rollno);
printf("3.marks: %.d\n",s[i].marks);
printf("4.city: %s\n",s[i].city);
printf("5.dream: %s\n",s[i].dream);
}
int main()
{
struct student s[100];
int n;
printf("enter no of student");
scanf("%d",&n);
/*
if(n<= 0||n>100)
{
printf("invalid output");
return 0;
} */
read (s,n);
write(s,n);
return 0;
}
