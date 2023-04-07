// #include<stdio.h>
// int main()
// {
//     const float pi=3.14;
//     // printf("%f",pi);
//     // pi=2.14;
//     // printf("%f",pi);
    
//     return 0;
// }

//using preprocessor 
// #include<stdio.h>
// #define pi 3.14
// int main()
// {
//     pi=4.14; //expression is not assignable
//     printf("%f",pi);
// }

// #include<stdio.h>
// #define msg "sum=%d"
// int main()
// {
//     printf(msg,4+5);
//     return 0;
// }

// #include<stdio.h>
// #define mul(a,b) (a*b)
// int main()
// {
//     printf("PROD %d",mul(5,4));
//     return 0;
// }

// #include<stdio.h>
// #define len 5 
// #undef len
// #define bread 10
// #define area len*bread
// int main()
// {
//     printf("%d",len);
//     printf("%d",area);
//     return 0;
// }

#include<stdio.h>
#define len 5 
#define bread 10
#define area len*bread
int main()
{
    #ifdef bread
    printf("breadth is present ");
    #else
    printf("breadth not present ");
    #endif
}