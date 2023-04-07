#include<stdio.h>
// int fun(int a)
// {
//     if(a==1)
//     return 1; 

//     else
//     {
//         return 5+fun(a-1);
//     }
// }
// int main()
// {
//     int a=3;
//     int val=fun(a);
//     printf("%d",val);
// }
int fact(int a)
{
    //BASE CASE
    if(a==0 || a==1)
    return 1;

    //RECURSIVE CASE
    // int chotiprob=fact(a-1);
    // int badiprob=a*chotiprob;

    // return badiprob;
    //USE ABOVE TWO STEPS
    return a*fact(a-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ft =fact(n);
    printf("%d",ft);
}