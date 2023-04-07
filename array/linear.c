// 5
// 23
// 2
// 4
// 23
// 5
// 1
// Element is present in the array at 3 possition %     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int key,a=0;
    scanf("%d",&key);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    // for(int i=0;i<n;i++)
    // {
    //     if(key==arr[i])
    //     printf("Element is present in the array at %d possition ",i+1);
    // }
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        a++;
    }
    printf("element is present %d times",a);
}