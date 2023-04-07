#include<stdio.h>
#include<stdbool.h>
// int main()
// {
//     int val=1;char ch;
//     int n;
//     // n=printf("Hi %d",val);
//     // printf("%d",n);

//     n =scanf("\n %c",&val,&ch);
//     printf("%d",n);
// //no of input in the char
// }

int main()
{
    int val=2;
    int n;
    while (val<=5)
    {
        int i=2;
        bool p=true;
        while(i<val)
        {
            if(val%i==0)
            {
                p=false;
                break;
            }
            i++;
        }
        if(p)
        printf("val %d",val);
        val++;
    }
    
}