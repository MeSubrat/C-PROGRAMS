#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int multiplication(int x,int y){
    return x*y;

}
int substraction(int x,int y){
    return x-y;
}
float division(int x,int y){
    return x/y;
}


int main(){
    int a,b;
    printf("Enter first and second number simultaneously: ");
    scanf("%d%d",&a,&b);
    printf("The sum is %d \n",sum(a,b));
    printf("the multiplication is %d \n",multiplication(a,b));
    printf("the substraction is %d \n",substraction(a,b));
    printf("the division is %f \n",division(a,b));
}

