//****
//***
//**
//*
// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=5;j>i;j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Q2
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=5;j>i;j--)
//         {
//             printf("*");
//         }
//         for(int k=1;k<=(2*i);k++)
//         {
//             printf(" ");
//         }
//         for(int l=5;l>i;l--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Q3
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=5;j>i;j--)
//         {
//             printf("*");
//         }
//         for(int k=0;k<(2*i);k++)
//         {
//             printf(" ");
//         }
//         for(int l=5;l>i;l--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         for(int k=1;k<=(5-i)*2;k++)
//         {
//             printf(" ");
//         }
//         for(int l=1;l<=i;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }    
// }
//  #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5-i;j++)
//         {
//             printf("*");
//         }
//         for(int j=1;j<2*i;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=5-i;j++)
//         {
//             if(i==0 && j==1)
//             {
//                 continue;
//             }
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
    // for(int i=1;i<=3;i++)
    // {
    //     for(int j=1;j<=3;j++)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
//     int rowno=1;
//     while (rowno<=3)        
//     {
//         int i=65;
//         while (i<=67)
//         {
//             printf(" %c",i);
//             i++;
//         }
//         rowno++;
//         printf("\n");
        
//     }
    
// }


/*
***
***
***  

*
**
***
*/

/*
A
BB
CCC
DDDD
*/

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int row=1;row<=n;row++)
//     {
//         for(int i=1;i<=row;i++)
//         {
//             printf(" %c",(64+row));
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main()
{
// *
// **
// ***
// ****
// *****
    // int n;
    // scanf("%d",&n);
    // int row=1;
    // while(row<=n)
    // {
    //     int c=1;
    //     while (c<=row)
    //     {
    //         printf("*");
    //         c++;
    //     }
    //     printf("\n");
    //     row++;
        
    // }

    // int n;
    // scanf("%d",&n);
    // int row=1;
    // while(row<=n)
    // {
    //     int c=1;
    //     while(c<=n-row+1)
    //     {
    //         printf("*");
    //         c++;
    //     }
    //     printf("\n");
    //     row++;
    // }

    //   
//    *
//   **
//  ***
// ****
    // while (row<=n)
    // {
    //     int c=1;
    //     while(c<=n-row)
    //     {
    //         printf(" ");
    //         c++;
    //     }
    //     int c1=1;
    //     while(c1<=row)
    //     {
    //         printf("*");
    //         c1++;
    //     }
    //     printf("\n");
    //     row++;
    // }

// *****
//  ****
//   ***
//    **
//     *

    // while (row<=n)
    // {
    //     int ctsp=1;
    //     while(ctsp<=row-1)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     while(cts<=n+1-row)
    //     {
    //         printf("*");
    //         cts++;
    //     }
    //     printf("\n");
    //     row++;
    // }


//     *
//    **
//   ***
//  ****
// *****
    // while(row<=n)
    // {
    //     int ctsp=1;
    //     while (ctsp<=n-row)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     while(cts<=row)
    //     {
    //         printf("*");
    //         cts++;
    //     }
    //     printf("\n");
    //     row++;
        
    // }
// *
// **
// ***
// ****
// *****

    // while(row<=n)
    // {
    //     int cts=1;
    //     while (cts<=row)
    //     {
    //         printf("*");
    //         cts++;
    //     }
    //     // int cts=1;
    //     // while(cts<=row)
    //     // {
    //     //     printf("*");
    //     //     cts++;
    //     // }
    //     printf("\n");
    //     row++;
        
    // }
// 1
// 01
// 101
// 0101
// 10101
    // while(row<=n)
    // {
    //     int a=row;
    //     int cts=1;
    //     while (cts<=row)
    //     {
    //         if(a%2==0)
    //         printf("0");
    //         else
    //         printf("1");
    //         cts++;
    //         a++;
    //     }
    //     printf("\n");
    //     row++;
        
    // }

//     *
//    ***
//   *****
//  *******
// *********

    // while (row<=n)
    // {
    //     int ctsp=1;
    //     while(ctsp<=n-row)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
        // while(cts<=row)
        // {
        //     printf("*");
        //     cts++;
        // }
        // int cts1=1;
        // while(cts1<=row-1)
        // {
        //     printf("*");
        //     cts1++;
        // }
        
        // while (cts<=(2*row-1))
        // {
        //     printf("*");
        //     cts++;
        // }
        // printf("\n");
        // row++;

    // }
// *********
//  *******
//   *****
//    ***
//     *
//    int n;
//     scanf("%d",&n);
//     int row=n;
//      while (row>=1)
//     {
//         int ctsp=1;
//         while(ctsp<=n-row)
//         {
//             printf(" ");
//             ctsp++;
//         }
//         int cts=1;
//         while (cts<=(2*row-1))
//         {
//             printf("*");
//             cts++;
//         }
//         printf("\n");
//         row--;
//     }
// ABCDEEDCBA
//  ABCDDCBA
//   ABCCBA
//    ABBA
//     AA
    // int n;
    // scanf("%d",&n);
    // int row=1;
    // while (row<=n)
    // {
    //     int ctsp=1;
    //     while (ctsp<=row-1)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     while (cts<=n-row+1)
    //     {
    //         printf("%c",(64+cts));
    //         cts++;
    //     }
    //     int cts1=n-row+1;
    //     while (cts1>0)
    //     {   
    //         printf("%c",64+cts1);
    //         cts1--;
    //     }
        
    //     printf("\n");
    //     row++;

        
    // }
    // int n;
    // scanf("%d",&n);
    // int row=1;
    // while (row<=n)
    // {
    //     int cts=1;
    //     while (cts<=n)
    //     {
    //         if(cts==row||cts==(n-row+1))
    //     {
    //         printf("*");
    //     }
    //     else 
    //     printf(" ");
    //     cts++;
    //     }
    //     printf("\n");
    //     row++;
    // }

//     +    
//     +    
//     +    
//     +    
// +++++++++
//     +    
//     +    
//     +    
//     + 
    // int n;
    // scanf("%d",&n);
    // int row=1;
    // while (row<=n)
    // {
    //     int cts=1;
    //     while(cts<=n)
    //     {
    //         if(cts==(n/2+1)||row==(n/2+1))
    //         {
    //             printf("+");
    //         }
    //         else 
    //         printf(" ");
    //         cts++;
    //     }
    //     printf("\n");
    //     row++;
    // }

//     *
//    **#
//   ***##
//  ****###
// *****####
//  ****###
//   ***##
//    **#
//     *
    // int n;
    // scanf("%d",&n);
    // int row=1;
    // while (row<=n)
    // {
    //     int ctsp=1;
    //     while(ctsp<=n-row)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     while(cts<=row)
    //     {
    //         printf("*");
    //         cts++;
    //     }
    //     int cth=1;
    //     while(cth<=row-1)
    //     {
    //         printf("#");
    //         cth++;
    //     }
    //     printf("\n");
    //     row++;
    // }
    // int row1=1;
    // while (row1<n)
    // {
    //     int ctsp=1;
    //     while(ctsp<=row1)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     while(cts<=n-row1)
    //     {
    //         printf("*");
    //         cts++;
    //     }
    //     int cth=1;
    //     while(cth<=n-row1-1)
    //     {
    //         printf("#");
    //         cth++;
    //     }
    //     printf("\n");
    //     row1++;
    // }
// 3
//   1
//  232
// 34543
//  232
//   1  
// 5  
//     1
//    232
//   34543
//  4567654
// 567898765
//  4567654
//   34543
//    232
//     1   
    //   int n;
    // scanf("%d",&n);
    // int row=1;int a;
    // while (row<=n)
    // {
    //     int ctsp=1;
    //     while(ctsp<=n-row)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     a=row;
    //     while(cts<=row)
    //     {
    //         printf("%d",a);
    //         a++;
    //         cts++;
    //     }
    //     int cth=1;
    //     a-=2;
    //     while(cth<=row-1)
    //     {
    //         printf("%d",a);
    //         a--;
    //         cth++;
    //     }
    //     printf("\n");
    //     row++;
    // }
    //  row =1;
    // while (row<n)
    // {
    //     a=n-row;
    //     int ctsp=1;
    //     while(ctsp<=row)
    //     {
    //         printf(" ");
    //         ctsp++;
    //     }
    //     int cts=1;
    //     while (cts<=n-row)
    //     {
    //         printf("%d",a);
    //         cts++;
    //         a++;
    //     }
    //     a-=2;
    //     int cts1=1;
    //     while (cts1<=n-row-1)
    //     {
    //         printf("%d",a);
    //         a--;
    //         cts1++;
    //     }
        
    //     printf("\n");
    //     row++;
        
    // }
// 5
//     *****
//    *   *
//   *   *
//  *   *
// *****    
    // int n;
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     for (int j = 1; j<=n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j<=n; j++)
    //     {
    //         if(i==1||i==n||j==1||j==n)
    //         printf("* ");
    //         else
    //         printf("  ");
    //     }
            
       
    //     printf("\n");
        
    // }
// 5

// 5         5
// 54       45
// 543     345
// 5432   2345
// 54321 12345
// 54321012345
// 54321 12345
// 5432   2345
// 543     345
// 54       45
// 5         5
    // l
// 7
//       1
//     21 12
//   321   123
// 4321     1234
//   321   123
//     21 12
//       1
    int n;
    scanf("%d",&n);
    for(int i=1;i<=(n+1)/2;i++)
    {
        for(int j=1;j<=(n-2*i+1);j++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(int j=1;j<2*(i-1);j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1&&i==1)
            continue;
            else
            printf("%d",j);
        }
        printf("\n");
    }
     for(int i=n/2;i>=1;i--)
    {
        for(int j=1;j<=(n-2*i+1);j++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(int j=1;j<2*(i-1);j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1&&i==1)
            continue;
            else
            printf("%d",j);
        }
        printf("\n");
    }

    
    
}