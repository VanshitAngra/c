#include<stdio.h>
#include<string.h>
union student
{
    char name[30];
    int roll;
    char grade;
}stu;
int main()
{
    printf("%d",sizeof(stu));
    strcpy(stu.name,"VANSHIT");
    printf("%s\n",stu.name);
    stu.roll=19;
    printf("%d\n",stu.roll);
    stu.grade='A';
    printf("\n%c",stu.grade);
}