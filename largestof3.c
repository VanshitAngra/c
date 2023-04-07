#include<stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter the three number \n ");
    // scanf("%d",&n1);
    // scanf("%d\n",&n2);
    // scanf("%d\n",&n3);
    scanf("%d,%d,%d",&n1,&n2,&n3);

    if(n1>n2&&n2>n3)
    {
        printf("n1 is largest");
    }
    else if (n2>n1&&n1>n3)
    {
        printf("n2 is largest");
    }
    else
    printf("n3 is largest");
    
    return 0;
}