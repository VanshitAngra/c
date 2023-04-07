#include<stdio.h>
// int main()
// {
//     typedef int t;
//     t a=5;
//     printf("%d",a);
// }

// typedef struct student
// {
//     char name[30];
//     int roll;
//     char grade;
// }stu;
// int main()
// {
//     stu st;
//     st.roll=12;
//     st.grade='A';

//     printf("%d %c \n",st.roll,st.grade);

//     return 0;
// }
 struct student
{
    char name[30];
    int roll;
    char grade;
};
typedef struct student student;
int main()
{
    student st;
    st.roll=12;
    st.grade='A';

    printf("%d %c \n",st.roll,st.grade);

    return 0;
}
