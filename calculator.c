#include<stdio.h>
int main()
{
    float a,b;
    char ch;
    printf("Enter the numbers \n");
    scanf("%f%f",&a,&b);
    printf("Enter the operation to be done \n");
    scanf(" %c",&ch);

     switch (ch)
    {
    case '+':
        printf("%f+%f=%f",a,b,a+b);       
        break;
    case '-':
        printf("%f",(a-b));
        break;
    case '*':
        printf("%f",(a*b));
        break;
    case '/':
        printf("%f",(a/b));
        break;
    default:
        printf("fir se try kar bhai ");
        break;
    }

    return 0;
}
