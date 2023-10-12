#include<stdio.h>
int factorial(int num);//FUNCTION PROTOTYPE
int main()
{
    int num;
    printf("Enter the number for which you want to find factorial: ");
    scanf("%d",&num);
    printf("%d ",factorial(num));
}
int factorial(int num)//FUNCTION CALL
{
    if(num==0)
    {
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}