#include<stdio.h>
long int fact(int); //FUNCTION PROTOTYPE
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    long int res=fact(num);
    printf("The factorial of %d is %d",num,res);
}
//num=4
long int fact(int num) //FUNCTION DECLARATION 
{
    if(num<=0)
    {
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}