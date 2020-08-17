#include<stdlib.h>
#include<stdio.h>

struct node// structure named node that contains a data part and a pointer of type node
	{
		int data;
		struct node *pointer;
        };
int print(struct node* start);
void removeodd(struct node** start)// function to remove odd element
{
    struct node* current = *start;
    struct node* temp;
    while (current != NULL)//finds the first even element
    {
        if(current->data % 2 != 0)
            current = current->pointer;
        else
            break;
    }
    *start = current;// makes the first even element the start of the list
    if (current == NULL)// if end of the list is reached, return
    {
        return;
    }
    temp = current;//temporary pointer is set to current 
    current = current->pointer;

    while (current != NULL)
    {
        if(current->data%2!=0)// if odd, skip the element
            current = current->pointer;
        else// move ahead if even
        {
            temp->pointer = current;
            temp = current;
            current = current->pointer;
        }
    }
    temp->pointer = NULL;
}
int main()
{
	int n;
	scanf("%d",&n);// stores the number of inputs
	struct node *temp,*current;
	struct node *start;// its the head of the list
	struct node *first=malloc(sizeof(struct node));// allocates memory to the first node
	start=NULL;
	if(n>0)
	{
		scanf("%d",&first->data);
		start=first;
		temp=first;
	}
	else
	{
		printf("NULL\n");
		return 0;
	}
	
	for(int i =1;i<n;i++)// creates the linked list by establishing link between consecutive nodes through the pointers
	{
		current=malloc(sizeof(struct node));
		temp->pointer=current;
		temp=current;
		scanf("%d",&current->data);
		current->pointer=NULL;
	}
	
	print(start);// prints the inputted list
	removeodd(&start);// deleted the odd valued nodes
	printf("\n");
	print(start);// prints the final list
	return 0;
}
int print(struct node* start)
{
	struct node* i;
	i=start;
	if(start==NULL)// if list is empty, print NULL
	{
		printf("NULL");
		return 0;
	}
	while(i!=NULL)// else traverse, and print all elements of the list through a temporary pointer i
	{
		printf("%d",i->data);
		i=i->pointer;
		printf("-->");
		if(i==NULL)
		{
		  printf("NULL");
		}
	}
	return 0;
}