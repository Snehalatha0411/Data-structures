#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *p;
};
int main()
{
	struct node *head=NULL;
	struct node *current=NULL;

	head=(struct node*)malloc(sizeof(struct node));
	current=(struct node*)malloc(sizeof(struct node));
	head->data=30;
	head->p=NULL;
	printf("%d %d",head->data,head->p);
	current->data=40;
	current->p=NULL;
	head->p=current;

	printf("\n%d %d",head->p->data,head->p->p);
        printf("\n%d -> %d",head->data,head->p->data);
}
