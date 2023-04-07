#include <stdio.h>
#include<string.h>
#include<math.h>
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     int l=strlen(str);
//     int cs=0,cc=0,cd=0,cv=0;
//     for(int i=0;i<l;i++)
//     {
//         if(str[i]=='a' || str=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
//         cv++;
//         else if(str[i]==' ')
//             cs++;
//         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
//             cc++;
//         else if(str[i]>='0' && str[i]<='9'e)
//         cd++;
//     }
//     printf("No of space in string are %d\n",cs);
//     printf("No of vowels in string are %d\n",cv);
//     printf("No of constants in string are %d\n",cc);
//     printf("No of digits in string are %d",cd);
// }
// int main()
// {
//     int arr[100],arr1[100];
//     int n,sum=0,a=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n-1;j++)
//         {
//                if(arr[i]==arr[j])
//                {
//                 arr[j]=-1;
//                 c++;
//                }
//         }
//         if(c==0 && arr[i]>0)
//         {
//             arr1[a]=arr[i];
//             a++;
//         }
//         c=0;
//     }
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d ",arr1[i]);
//         sum+=arr1[i];
//     }
//     printf("%d",sum);
    
    
// }
// int main()
// {
//     int n,a=0,r,sum=0;
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%2;
//         sum+=r*pow(10,a);
//         a++;
//         n/=2;
//     }
//     printf("%d",sum);
// }

// int main()
// {
//     int n,arr[100],a=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//             if(arr[i]<arr[i+1])
//             {
//                 a=i;
//                 break;
//             }
//     }
//     printf("%d",a);
// }
// int main()
// {
//     int n,arr[100],arr1[100],a=0,sum;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         sum=0;
//         if(i==n-2)
//         {
//             sum=arr[n-2]+arr[n-1]+arr[0];
//         }
//         else if (i==n-1)
//         {
//             sum=arr[n-1]+arr[0]+arr[1];
//         }
//         else{
//             sum=arr[i]+arr[i+1]+arr[i+2];
//         }
//         arr1[a]=sum;
//         a++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr1[i]);
//     }
// }

// int main()
// {
//     int n,m ,k,arr[100][100],arr1[100][100];
//     scanf("%d",&n);
//     scanf("%d",&m);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     scanf("%d",&k);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(j==k && k>-1)
//             {
//                 printf("%d ",arr[i][j]);
//             }
            
//         }
//         k--;
//     }
// }
// int main()
// {
//     int n;
//     int arr[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 printf("%d ",arr[i]);
//                 break;
//             }
//         }
//     }
// }

// for(i=1;i<=n;i++)
// {
//     for(j=0;j<n;j++)
//     {
//         if(i==arr[j])
//         {
//             printf("%d ",arr[j]);
//             for(index=j;index<n;j++)
//             {
//                 arr[index]=arr[index+1];
//             }
//         }
//     }
// }
// #include<stdio.h>
// int main() 
// {
// int n = 7;
// int i;
// int arr[n];
// for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
// for(i = 1; i <= n; i++) { int j;
//         for(j = 0; j < n; j++) {
//             if(i == arr[j]) {
// printf("%d ", j);
// int index;
// for(index = j; index < n; index++) {
// } }
// } }
// }
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t)
//     {
//         int flag =0;
//         int arr[5][5];
//         int i,j;
//         for (i = 0; i < 5; i++) {
//             for(j=0;j<5;j++)
//             { 
//                 scanf("%d",&arr[i][j]);
//             } 
//         }
//         for (i = 0; i < 5; i++){
//             for(j=0;j<5;j++)
//             { 
//                 if(arr[i][j]==arr[i-1][j-1])
//                 {
//                     flag=1;
//                 }
//             } 
//         }
//         t--;
//         if(flag){
//             printf("true");
//         }
//         else 
//         printf("false");
//     }
// }
// void sumofmedal(int arr2021[][3],int arr2022[][3],int cn,int mt)
// { int sum=0;
// int i;
// sum += arr2021[cn][mt]+arr2022[cn][mt]; 
// printf("%d",sum);
// }
int main()
{
    int noc,cn,mt;
    scanf("%d %d %d",&noc,&cn,&mt); 
    int arr2021[noc][3];
    int arr2022[noc][3];
    int i,j,sum=0;
    for (i = 0; i < noc; i++) 
    {
        for (j = 0; j < 3; j++) 
        { 
            scanf("%d",&arr2021[i][j]);
        }
    }
    for (i = 0; i < noc; i++) 
    {
        for (j = 0; j < 3; j++) 
        { 
            scanf("%d",&arr2022[i][j]);
        } 
    }
    sum += arr2021[cn-1][mt-1]+arr2022[cn-1][mt-1]; 
    printf("%d",sum);
    // sumofmedal(arr2021,arr2022,cn-1,mt-1); 
}