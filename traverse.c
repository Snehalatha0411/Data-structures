#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
        int data;
        struct single_linked_list *p;
};
void traverse(struct single_linked_list *head);
void count_of_nodes(struct single_linked_list *head);
int main()
{
        struct single_linked_list *head=(struct single_linked_list *)malloc(sizeof(struct single_linked_list));
        head->data=10;
        head->p=NULL;
        struct single_linked_list *current=(struct single_linked_list *)malloc(sizeof(struct single_linked_list));
        current->data=20;
        current->p=NULL;
        head->p=current;
        current=(struct single_linked_list *)malloc(sizeof(struct  single_linked_list));
        current->data=30;
        current->p=NULL;
        head->p->p=current;
        printf("%d %d %d",head->data,head->p->data,head->p->p->data);
	traverse(head);
}
void traverse(struct single_linked_list *head)
{
        struct single_linked_list *temp=(struct single_linked_list *)malloc(sizeof(struct single_linked_list));
        temp->p=head;
        if(temp->p==NULL)
        {
        printf("single linked list is empty");
        exit(0);
        }
        while(temp->p!=NULL)
        {
        printf("%d",temp->data);
        temp=temp->p;
        }
}
void count_of_nodes(struct single_linked_list *head)
{
	struct single_linked_list *temp=NULL;
	temp->p=head;
	int count=0;
	if(temp->p==NULL)
	{
	 	printf("linked list is empty");
	}
	while(temp->p!=NULL)
	{
	count=count+1;
	temp=temp->p;
	printf("%d",count);
	}
}


