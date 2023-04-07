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
    printf("\n");
    for(int j=0;j<c;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<r;i++)
            {
                printf("%d ",arr[i][j]);
            }
        }
        else
        {
            for(int i=r-1;i>=0;i--)
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
}