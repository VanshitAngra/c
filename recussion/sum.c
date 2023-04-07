#include<stdio.h>

int solve(int a)
{
    if(a<=0)
    {
        return 0;
    }
    int dig=a%10;
    int sum=dig+solve(a/10);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=solve(n);
    printf("%d",ans);
}