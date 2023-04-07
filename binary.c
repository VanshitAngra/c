#include<stdio.h>

int main()
{
    int val;
    printf("Enter the value \n");
    scanf("%d",&val);
    int rem;
    long bin=0;
    int place=1;
    while (val!=0)
    {
        rem=val%2;
        bin=bin+rem*place;
        val=val/2;
        place=place*10;
    }
    printf("%lu",bin);
    
}