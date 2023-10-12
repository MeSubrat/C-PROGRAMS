#include<stdio.h>
#include<stdlib.h>
// #define CAPACITY 5;
int top=-1;
int stack[5];
void push(int);
int isFull(void);
int pop(void);
int isEmpty(void);
int peak(void);
int traverse(void);
int main()
{
    int ch,ele;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peak\n");
        printf("4.Traverse\n");
        printf("5.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1:
            printf("Enter element to push: ");
            scanf("%d",&ele);
            push(ele);
            break;
            case 2: pop();
            break;
            case 3: peak();
            break;
            case 4: traverse();
            break;
            case 5: exit(0);
            default : printf("Invalid choice\n");
            break;
        }
        // if(ch==1)
        // {
        //     printf("Enter element to push: ");
        //     scanf("%d",&ele);
        //     push(ele);
        // }
        // else if(ch==2)
        // {
        //     pop();
        // }
        // else if(ch==3)
        // {
        //     peak();
        // }
        // else if(ch==4)
        // {
        //     traverse();
        // }
        // else if(ch==5)
        // {
        //     exit(0);
        // }
        // else{
        //     printf("Enter a valid choice..\n\n");
        // }
    }
}
void push(int ele)
{
    if(isFull()==1)
    {
        printf("Stack is overflowed\n");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("%d is pushed\n",ele);
    }
}
int isFull()
{
    if(top==5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
	if(isEmpty())
	{
		printf("Stack is underflowed\n");
	}
	else
	{
		printf("%d is Popped\n",stack[top--]);
        // --top;
	}
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int peak()
{
	if(isEmpty()==1)
	{
		printf("Stack is underflowed\n");
	}
	else
	{
		printf("Peak element is %d\n",stack[top]);
	}
}
int traverse()
{
	if(isEmpty())
	{
		printf("Stack is underflowed\n");
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}