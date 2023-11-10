#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int rear =-1;
int front =-1;
int isEmpty()
{
	return rear==-1;
}
int isFull()
{
	return rear==MAX_SIZE-1;
}
int frontvalue()
{
	if(isEmpty())
	{
		printf("Queue is empty");
	}
	else
	{
		return queue[front];
	}
}
int enqueue(int data)
{
	if(isFull())
	{
		printf("Queue is full");
	}
	else
	{
		return queue[rear++]=data;
	}
}
int dequeue()
{
	if(isEmpty())
	{
		printf("Queue is empty");
	}
	else
	{
		if(front==rear)
		{
			front=-1;
		}
		else
		{
			front++;
			return queue[front-1];
		}
	}
}
int display()
{
	int i;
	if(isEmpty())
	{
		printf("queue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
		       printf("%d\n",queue[i]);
		}
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printf("Intial queue values are:\n");
	display();
	printf("Dequeued elements :%d\n",dequeue());
	printf("frontvalue=%d",frontvalue());
	printf("Elements after dequeue are:\n");
	display();
	printf("Dequeued elements :%d\n",dequeue());
	printf("After dequeue operation\n");
	display();
	printf("\nfrontvalue:%d\n",frontvalue());
}
