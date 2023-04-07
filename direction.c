#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=0,y=0;
    char ch;
    printf("Enter the direction ");
    scanf(" %c",&ch);

    while (ch!='\n')          
    {
        if (ch=='N')
            y++;
        else if(ch=='S')
            y--;
        else if(ch=='E')
            x++;
        else if(ch=='W')
            x--;
        scanf("%c",&ch);
    }
    if(x>=0&&y>=0)
    {
        for(int i=0;i<y;i++)
           printf("E");
        for(int i=0;i<x;i++)
        printf("N");
    }
    else if(x>=0&&y<0)
    {
        
        for(int i=0;i<x;i++)
        printf("E");
        for(int i=0;i< (abs(y));i++)
        printf("S");
    }
    else if(x<0&&y>=0)
    {
        for(int i=0;i<y;i++)
        printf("N");
        for(int i=0;i< (abs(x));i++)
        printf("W");
    }
    else if(x<0&&y<0)
    {
        for(int i=0;i< (abs(y));i++)
        printf("S");
        for(int i=0;i< (abs(x));i++)
        printf("W");
    }

}