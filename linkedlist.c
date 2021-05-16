#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h>
struct node
{
	int data;
	int *next;
}head=NULL;
void main()
{
	printf("entering into the main function\n");
	add_at_begin();
	printf("added a node at begin\n");
	add_at_end();
	printf("added a node at end\n);
}

