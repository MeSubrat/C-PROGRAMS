#include<stdio.h>
int main()
{
    printf("Enter three numbers : ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("Greatest is %d",a);
        }
        else{
            printf("Greatest is %d",c);
        }
    }
    else{
        if(b>c)
        {
            printf("Greatest is %d",b);
        }
        else
        {
            printf("Greatest is %d",c);
        }
    }
}