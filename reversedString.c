//CREATE A FUNCTION WHICH WILL TAKES A STRING AND RETURN THE REVERSED STRING...
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char reverse(char []);
int nullIdentifier(char []);
int main()
{
    char str[20];
    printf("Enter a string : ");
    fgets(str,20,stdin);
    // printf("%d\n",nullIdentifier(str));
    reverse(str);
    // printf("%s",str);
}
char reverse(char str[20])
{
    int len=nullIdentifier(str);
    char temp[20];
    for(int i=0;i<=len;i++)
    {
        temp[i]=str[len-i];
    }
    printf("%s",temp);
}
int nullIdentifier(char str[20])
{
    int len=-1,i=0;
    // for(int i=0;i<length-1;i++)
    // {
    //     if(str[i]=='\0')
    //     {
    //         idx=i;
    //     }
    //     break;
    // }
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}