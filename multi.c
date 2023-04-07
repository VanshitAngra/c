//compile time initialization
//  #include <stdio.h>
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 0; i < 3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("%d ",arr[1][2]);
// }

//run time initialization
// #include <stdio.h>
// int main()
// {
//     int arr[3][2];
//     for (int i = 0; i < 3;i++)
//     {
//         for(int j=0;j < 2;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      for (int i = 0; i < 3;i++)
//     {
//         for(int j=0;j < 2 ;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
//  #include <stdio.h>
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int *ptr=&arr[0][0];
//     for (int i = 0; i < 3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d ",*ptr);
//             ptr++;
//         }
//         printf("\n");
//     }
// }

// take input of array in 2d and  take target value and find weather it is present or not and its index

#include<stdio.h>
int main()
{
    int arr[100][100];
    int r,c;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==t)
            {
                printf("FOUND at %d %d",i,j);
                return 0;
            }
        }
    }
    printf("Not FOUND");
    return 0;
}