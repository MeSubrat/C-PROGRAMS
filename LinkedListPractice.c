#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* head=NULL;
int length;

void addatend()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));

	printf("Enter the element: ");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(head==NULL)
	{
		head=temp;
		printf("%d added successfully..\n",temp->data);
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
		printf("%d added successfully..\n",temp->data);
	}

}

void display()
{
	if(head==NULL)
	{
		printf("List is Empty..\n");
	}
	else
	{
		struct node* ptr;
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->link;
		}
		printf("\n");
	}
}

int lengthoflist()
{
	int count=0;
	struct node* ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		count+=1;
		ptr=ptr->link;
	}
	return count;
}

void addatmiddle()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));

	

	if(head==NULL)
	{
		head=temp;
		printf("%d added successfully..\n",temp->data);
	}
	else
	{
		int loc;
		length=lengthoflist();
		printf("Enter the location : ");
		scanf("%d",&loc);

		if(loc>length)
		{
			printf("Invalid location..\n");
			printf("Currently list having %d no of nodes..\n",length);
		}
		else
		{
			printf("Enter the element: ");
			scanf("%d",&temp->data);
			temp->link=NULL;
			int i=1;
			struct node* ptr;
			ptr=head;
			while(i<loc)
			{
				ptr=ptr->link;
				i++;
			}
			temp->link=ptr->link;
			ptr->link=temp;
		}
	}
}

void delete(){
	int loc;
	printf("Enter the location: ");
	scanf("%d",&loc);

	if(loc>lengthoflist())
	{
		printf("This node is not available in the list..");
		return;
	}
	else if(loc==1)
	{
		struct node* temp;
		temp=head;
		head=temp->link;
		printf("%d deleted successfully..",temp->data);
		temp->link=NULL;
		free(temp);
	}
	else
	{
		struct node* p,*q;
		p=head;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		printf("%dth Node deleted successfully..\n",loc);
		free(q);
	}
}

void reverse(){
	if(head==NULL)
	{
		printf("Oops the list is empty...\n");
	}
	else
	{
		struct node *current=head,*prev=NULL,*Next=NULL;

		while(current!=NULL)
		{
			Next=current->link;
			current->link=prev;
			prev=current;
			current=Next;
		}
		head=prev;
		printf("The link is reversed..\n");
	}
}

int main()
{
	int choice;
	while(1)
	{
		printf("\n");
		printf("\n1.Add at end\n");
		printf("2.Display the elements.\n");
		printf("3.Add at middle\n");
		printf("4.Length of list\n");
		printf("5.Delete a node..\n");
		printf("6.Reverse the list..\n");
		printf("7.Exit\n");
		printf("Enter choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:		addatend();
						break;
			case 2:		display();
						break;
			case 3:		addatmiddle();
						break;
			case 4:		length=lengthoflist();
						printf("Length of list is %d ",length);
						break;
			case 5: 	delete();
			break;

			case 6:		reverse();
			break;
			case 7:		exit(1);
			default:	printf("Invalid choice..\n");
		}
	}
}