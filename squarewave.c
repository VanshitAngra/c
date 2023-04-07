/*
1  2  3  4
5  6  7  8 
9  10 11 12
13 14 15 16

output:- 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10*/
//matrix multiplication
//transpose of matrix
//diagonal elements
//upward and lower triangle
#include<stdio.h>
int main()
{
    int n,m,arr[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int sr=0,er=n-1,sc=0,ec=m-1;

    while(sr<=er&&sc<=ec)
    {
        for(int j=sc;j<=ec;j++)
        {
            printf("%d ",arr[sr][j]);
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            printf("%d ",arr[i][ec]);
        }
        ec--;
        for(int j=ec;j>=sc;j--)
        {
            printf("%d ",arr[er][j]);
        }
        er--;
        for(int i=er;i>=sr;i--)
        {
            printf("%d ",arr[i][sc]);
        }
        sc++;
       
    }
}