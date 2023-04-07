#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp=fopen("vanshit.txt","w");
    if(fp==NULL)
    {
        printf("error\n");
    }
    // fprintf(fp,"Hello Student \n");
    char ch;
    ch=getc(fp);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    
    fclose(fp);
    return 0;
}