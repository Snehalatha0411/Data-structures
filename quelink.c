#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *p;
}*front=NULL,*rear=NULL;
int isEmpty()
{
	return rear==NULL;
}
int enqueue(data)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->p=NULL;
	if(front==NULL)
	{
		front=rear=new;
	}
	rear->p=new;
	rear=new;
}
int dequeue()
{
	int a;
	a=front->data;
	struct node *temp=front;
	if(isEmpty)
	{
		printf("Queue is empty");
	}
	else
	{
		front=temp->p;
		free(temp);
	}
	return a;
}
int frontvalue()
  {
	if(isEmpty())
		printf("Queue is empty");
	else
	{
		return front->data;
	}

}
int display()
{
	struct node *temp=front;
	temp=front;
	if(isEmpty())
	{
		printf("queue is empty");
	}
	while(temp!=NULL)
	{
		printf("%d",temp->data);
	temp=temp->p;
}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printf("queue intialize vaues are\n: ");
        display();
	printf("frontvalue=%d\n",frontvalue());
	printf("Dequeued elements :%d\n",dequeue());
	printf("elements after dequeue are\n: ");
	display();
	printf("Dequeued elements :%d\n",dequeue());
	printf("elements after dequeue are\n: ");
	printf("frontvalue:%d\n",frontvalue());
	if(isEmpty())
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Queue is not empty");
	}
}

