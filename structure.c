#include<stdio.h>
int main()
{
//LOCAL STRUCTURE
struct employee{
    long eno;
    char ename[20];
    float esalary;
};
struct employee e;
    printf("Enter employee mobile number: ");
    scanf("%d",&e.eno);
    printf("Enter employee name: ");
    scanf("%s",&e.ename);
    printf("Enter employee salary: ");
    scanf("%f",&e.esalary);

    printf("\tEMPLOYEE DETAILS PROVIDED BELOW\n");
    printf("Employe name: %s\n",e.ename);
    printf("Employe No: %d\n",e.eno);
    printf("Employe salary: %f\n",e.esalary);
}