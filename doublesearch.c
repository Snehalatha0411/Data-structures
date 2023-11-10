#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *prev;
   struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;
void printList() {
   struct node *ptr = head;
   printf("\n[head] <=>");
   while(ptr != NULL) {        
      printf(" %d <=>",ptr->data);
      ptr = ptr->next;
   }
   printf(" [last]\n");
}
void insert(int data)
{		
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->prev = NULL;
   link->next = NULL;
   if(head==NULL) {
      head = link;
      return;
   }
   current = head;
   while(current->next!=NULL)
      current = current->next;
   current->next = link;
   last = link;
   link->prev = current;
}

void search(int data)
{
   int pos = 0;
   if(head==NULL) {
      printf("Linked List not initialized");
      return;
   }
   current = head;
   while(current!=NULL) 
   {
      pos++;
      if(current->data == data)
      {
	      printf("%d found at position %d\n", data, pos);
         return;
      }
      if(current->next != NULL)
         current = current->next;
      else
         break;
   }
   printf("%d does not exist in the list\n", data);
}
int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(5);
   insert(44);
   insert(82);
   printList();
   search(5);
   return 0;
}

