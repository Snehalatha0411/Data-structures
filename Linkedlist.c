#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
	int data;
	struct single_linked_list *p;
};
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
}
