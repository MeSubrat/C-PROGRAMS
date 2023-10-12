#include<stdio.h>
int main()
{
    int a=0,b=1,sum=0,n;
    printf("Enter the number till which Fibonacci series get printed: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
}