#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* head=NULL;

//TO APPEND THE ELEMENTS TO LL
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        printf("%d Added successfully..\n",temp->data);
    }
    else
    {
        struct node* ptr;
        ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
        printf("%d Added successfully..\n",temp->data);
    }
}

//DISPLAY ALL THE ELEMENTS
void display()
{
    if(head==NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        struct node* ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d-->",ptr->data);
            ptr=ptr->link;
        }
        printf("\n");
    }
}

int length()
{
    int count=0;
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}

void addAtBegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element : ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        printf("%d Added successfully..\n",temp->data);
    }
    else
    {
        temp->link=head;//RIGHT SIDE CONNECTION ..
        head=temp;//LEFT SIDE CONNECTION..
        printf("%d Added successfully..\n",temp->data);
    }
}

void addAtMiddle()
{
    struct node* temp;
    int loc,len,i=1;
    printf("Enter the location : ");
    scanf("%d",&loc);
    len=length();

    if(loc>len)
    {
        printf("Invalid location..\n");
        printf("List has only %d nos of nodes..\n",len);
    }
    else
    {
        struct node * p;
        p=head;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter element: ");
        scanf("%d",&temp->data);
        temp->link=NULL;

        temp->link=p->link;
        p->link=temp;
        printf("%d Added successfully..\n",temp->data);
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Append\n2.Display\n3.Find length of list.\n4.Add element at begin\n5.Enter element at the middle\n6.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);    
        switch(choice)
        {
            case 1: append();
            break;
            case 2: display();
            break;
            case 3:
            printf("Length of list is : %d\n",length());
            break;
            case 4: addAtBegin();
            break;
            case 5: addAtMiddle();
            break;
            case 6: printf("Thank you!!...<3\n");
            exit(1);
            default: printf("Please enter valid choice..\n");
        }
    }
}