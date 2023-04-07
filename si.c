#include<stdio.h>

int main()
{
    int p,r,t;
    float si;
    printf("Enter the principle \n");
    scanf("%d" ,&p);
    printf("Enter the rate of interset \n");
    scanf("%d",&r);
    printf("Enter the time \n");
    scanf("%d",&t);
    si=(1.0*(p*r*t))/100;
    printf("simple interest is %f",si);
    return 0; 
}
