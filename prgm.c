#include<stdio.h>
#include<stdlib.h>
void takeInput(char[]);
struct name {
    char name[20];
};
int main()
{
    struct name name;
    while(1)
    {
        
    printf("Enter ur fname : ");
    takeInput(name.name);
    printf("%s",name.name);
    }
}
void takeInput(char name[20])
{
    fgets(name,20,stdin);
}