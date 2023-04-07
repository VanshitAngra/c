#include<stdio.h>
#include<string.h>
//structure declaration 
//structure can be global 

// struct student
// {
//     char name[40];
//     int roll;
//     int mark[3];
//     float avg;
//     char grade;
// };

//creating structure 
// struct student
// {
//     char name[40];
//     int roll;
//     int mark[3];
//     float avg;
//     char grade;
// }stu;
// we can access this using stu

// struct student
// {
//     char name[40];
//     int roll;
//     int mark[3];
//     float avg;
//     char grade;
// };


// to access value of the struct

// int main()
// {
//     struct student stu;
//     strcpy(stu.name,"Vanshit");
//     stu.roll=1;
//     stu.mark[0]=70;
//     stu.mark[1]=90;
//     stu.mark[2]=80;

//     stu.avg=(0.1)*(stu.mark[0]+stu.mark[1]+stu.mark[2])/3;
//     stu.grade='B';
//     printf("%s\n",stu.name);
//     printf("%d\n",stu.roll);
//     printf("%d\n",stu.mark[0]);
//     printf("%d\n",stu.mark[1]);
//     printf("%d\n",stu.mark[2]);
//     printf("%.4f\n",stu.avg);

//     return 0;

// }
//To access members of struct 
//using (.) dot operation
// struct student
// {
//     char name[40];
//     int roll;
//     int mark[3];
//     float avg;
//     char grade;
// };
// int main()
// {
    // struct student stu;
    // strcpy(stu.name,"Vanshit");
    // stu.roll=1;
    // stu.mark[0]=70;
    // stu.mark[1]=90;
    // stu.mark[2]=80;

    // stu.avg=(0.1)*(stu.mark[0]+stu.mark[1]+stu.mark[2])/3;
    // stu.grade='B';
    // printf("%s\n",stu.name);
    // printf("%d\n",stu.roll);
    // printf("%d\n",stu.mark[0]);
    // printf("%d\n",stu.mark[1]);
    // printf("%d\n",stu.mark[2]);
    // printf("%.4f\n",stu.avg);
    // scanf("%s",stu.name);
    // scanf("%d",&stu.roll);
    // scanf("%d\n",&stu.mark[0]);
    // scanf("%d\n",&stu.mark[1]);
    // scanf("%d\n",&stu.mark[2]);  
    // printf("%s\n",stu.name);
    // printf("%d\n",stu.roll);
    // stu.avg=(float)(stu.mark[0])

    // return 0;
// }

// struct student
// {
//     char name[30];
//     int roll;
//     int age;
// } stu[10];

// int main()
// {
//     for()
// }
//nested means a structure within another structure

// int main()
// {
//     enum car{BMW=9,LC,Fortuner,Endeavor}stu;
//     printf("%d",LC);
// }
// NameVanshit Angra
// Roll no12
// gradeA
// void show(char name1[20],int rolln,char grad)
// {
//     printf("Name%s\n",name1);
//     printf("Roll no%d\n",rolln);
//     printf("grade%c\n",grad);
// }
// struct student
// {
//     char name[20];
//     int roll;
//     int age;
// };

// void show(struct student stu[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Details of student %d\n",(i+1));
//         printf("Name:%s\n",stu[i].name);
//     printf("Roll no:%d\n",stu[i].roll);
//     printf("Age:%d\n",stu[i].age);
        
//     }  
// }
// int main()
// {
//     struct student stu[10];
//     int n;
//     printf("ENTER THE  NUMBER OF THE STUDENT:");
//     scanf("%d",&n);

//     for(int i=0;i<n;i++)
//     {
//         printf("Student Name %d:",(i+1));
//         scanf("%s",stu[i].name);
//         printf("Student roll %d:",(i+1));
//         scanf("%d",&stu[i].roll);        
//         printf("Student age %d:",(i+1));
//         scanf("%d",&stu[i].age);
//     }
//     printf("\n");
//     show(stu,n);
// }

// int main()
// {
    // strcpy(stu.name,"Vanshit Angra");
    // stu.roll=12;
    // stu.grade='A';

//     show(stu.name,stu.roll,stu.grade);

// }

struct student
{
    char name[7];
    int roll;
    char grade;
  char name1[11];


}stu;
int main()
{
    printf("%d",sizeof(stu));
}