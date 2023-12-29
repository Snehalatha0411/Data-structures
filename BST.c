#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	struct node *right;
	int data;
};
struct node *create()
{
	int input,data;
	printf("Do you want to add a node? (0 for NO and 1 for YES): ");
	scanf("%d",&input);
	if(!input)
		return NULL;
	else
	{
		struct node *new=malloc(sizeof(struct node));
		printf("Enter the data: "); 
	 	scanf("%d", &data);
        	new->data = data;

	        printf("Left child of %d:\n", new->data);
	        new->left = create();
		printf("Right child of %d:\n",new->data);
		new->right=create();

		return new;
	}
}
void displayInorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		displayInorder(root->left);
      	  	displayInorder(root->right);
	}
}
void displayPreorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		displayPreorder(root->left);
		displayPreorder(root->right);
	}
}
void displayPostorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		displayPostorder(root->left);
		displayPostorder(root->right);
	}
}
int main()
{
    struct node *root=create();
    printf("\nInorder Traversal: ");
    displayInorder(root);

    printf("\nPreorder Traversal: ");
    displayPreorder(root);

    printf("\nPostorder Traversal: ");
    displayPostorder(root);

    return 0;
}

		

