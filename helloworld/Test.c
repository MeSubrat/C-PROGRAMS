#include<stdio.h>
#include<string.h>
int strcomp(char a,char b)
{
	int i=0;
	while(a[i]==b[i] && a[i]=='\0' && b[i]=='\0')
	{
		i=i+1;
	}
	if(a[i]=='\0' && b[i]=='\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char username="Subrat@2023";
	char userid[20];
	printf("Enter username: ");
	scanf("%s",&userid);
	while(strcomp(userid,username)!=1)
	{
		printf("Enter username: ");
		scanf("%s",&userid);
		if(strcomp(userid,username)==0)
			{
				printf("Welcome!!");
			}
			else
			{
				printf("Enter password again: ");
			}
	}
}



