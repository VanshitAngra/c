// There are six students in a class whose marks are as follows 
// 98
// 32
// 46
// 99
// 33
// 78

#include <stdio.h>
int main()
{
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int check=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int a;
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
                check=1;
            }
        }
        if (check==0)
        {
            break;
        }
        
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nHighest marks %d at %d possition ",arr[n-1],n-1);
}