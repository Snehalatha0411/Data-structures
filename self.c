#include<stdio.h>
struct self
{
	int a;
	char c;
	struct self *p;
};
int main() 
{
	struct self V;
	V.a=10;
	V.c='J';
	V.p=NULL;
	
	struct self x;
	x.a=30;
	x.c='S';
	x.p=NULL;

        V.p=&x.a;

	printf("Block1 %d %c",V.a,V.c);
	printf("\nBlock2 %d %c",V.p->a,V.p->c);
};
