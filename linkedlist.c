#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
NODE *head=NULL;
void insert_at_head(NODE *nn)
{
   if(head==NULL)
   {
   	    head=nn;
	}
    else
	{
	   nn->next=head;
	   head=nn;	   	
	}	
}
void insert_at_end(NODE *nn)
{
	if(head==NULL)
   {
   	    head=nn;
	}
	else{
		NODE *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;
	}
	printf("\n");
	
	
}
void display()
{
	if(head==NULL)
	{
	    printf("No Nodes\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL)
	{
	    printf("%d\t",temp->data);
		temp=temp->next;	
	}
	printf("\n");
}

int main(){
	while(1)
	{
		int choice;
		printf("Enter\n 1.insert at head\n 2.insert at end\n 3.delete at head\n 4.delete at end\n 5.display and any thing else to exit\n :");
		scanf("%d",&choice);
		if(choice==1)
		{
			//insert at head;
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE*)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=head;
			insert_at_head(nn);
		}
		else if(choice==2)
		{
			//insert at end;
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE*)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_end(nn);
		}
		else if(choice==3)
		{
		    //delete at head;	
		}
		else if(choice==4)
		{
			//delete at end;
		}
		else if(choice==5)
		{
			//display;
			display();	
		}
		else
		{
			printf("Thank u");
			break;
		}
	}
}

