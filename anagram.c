#include<stdio.h>
#include<string.h>
void sort1(char s[]);

void comp(char s1[30],char s2[20])
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    int j=1;
    if(l1==l2)
    {
        sort1(s1);
        sort1(s2);
        for(int i=0;i<strlen(s1);i++)
        {
            if(s1[i]!=s2[i])
            {
                j=0;
            }
        }
        if(j)
        printf("Anagram");
        else
        printf("Not");

    }
    else
    printf("Not");
}
void sort1(char s[])
{
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=1;j<strlen(s);j++)
        {
            if(s[i]>s[j])
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
int main()
{
    char str[30],str1[20];
    printf("Enter first string ");
    scanf("%s",str);
    printf("Enter second string ");
    scanf("%s",str1);
    comp(str,str1);

}