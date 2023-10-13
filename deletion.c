#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
        int data;
        struct single_linked_list *p;
};
void delete_beg(struct single_linked_list *head);
int main()
{
        struct single_linked_list *head=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        head->data=10;
        head->p=NULL;

        struct single_linked_list *current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        current->data=20;
        current->p=NULL;
        head->p=current;

        current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        current->data=30;
        current->p=NULL;
        head->p->p=current;
        delete_beg(head);
}
void delete_beg(struct single_linked_list *head)	
{
	struct single_linked_list *temp=head;
	if(head==NULL)
		printf("List is empty");
	else
	{
		head=temp->p;
	printf(" deleted element is %d ",temp->data);
        free(temp);
	}
}
