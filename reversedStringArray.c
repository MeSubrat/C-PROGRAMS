//WRITE A FUNCTION WHICH TAKES IN AN ARRAY OF STRINGS AND RETURNS A NEW ARRAY WITH EACH STRING REVERSE..
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of strings array : ");
    scanf("%d",&n);
    // char *listOfStrings[n];
    char listOfStrings[n][20];
    printf("Enter the strings :");
    for(int i=0;i<n;i++)
    {
        fgets(listOfStrings[i], sizeof(listOfStrings[i]), stdin);
    }
}