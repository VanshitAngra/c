#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    fgets(str,20,stdin);
    printf("str: %s\n",str);
}