//Q1 print 1-5
// #include <stdio.h>
// int main()
// {
//     int count=1;
//     printf(" the count is ");
//     while (count<=5)
//     {
//         printf("%d\n",count);
//         count=count+1;

//     }
//     return 0;

    
// }
//Q2till the input
//Q3 even no
// #include<stdio.h>
// int main()
// {
//     int count=1;int num;
//     printf("enter till where you want to print ");
//     scanf("%d",&num);
//     while (count<=num)
//     {
//         if(count%2==0)
//         printf("%d\n",count);
//         count=count+1;

//     }
//     return 0;

// }
//Q4 print table
#include<stdio.h>
int main()
{
    int count=1;int num;
    printf("enter the number to print table\n");
    scanf("%d",&num);
    while (count<=10)
    {
        printf("%d",num);
        printf("*%d",count);
        printf("=%d\n",count*num);
        count=count+1;

    }
    return 0;

}