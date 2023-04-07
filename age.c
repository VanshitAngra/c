#include <stdio.h>
int main()
{
    int age;
    float marks;
   char grade;
    char grade=getchar();
    printf("enter age ,enter marks,enter grade \n");
    scanf("%d%f %c",&age,&marks,&grade);
    printf("age is %d",age);
    printf("\nmarks are %f",marks);
    printf("\ngrade are %c",grade);

    return 0;
}