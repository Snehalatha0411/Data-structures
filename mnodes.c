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
	struct node *second=NULL;
	struct node *third=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=30;
	second->data=40;
	third->data=50;
	head->p=second;
	second->p=third;
	third->p=NULL;
	printf("%d->%d->%d",head->data,head->p->data,head->p->p );
}

