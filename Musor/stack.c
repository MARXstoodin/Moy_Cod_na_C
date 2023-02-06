#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
	int integer;
	struct node* previos;
}
node;

node* initiolase()
{
	node* a;
	a = malloc(8);
	a->previos = NULL;
	return a;
}

void push(node* a)
{
	scanf("%d", a->integer);
	a->previos = (node*)a;
}

void pop()
{
	
}

void top()
{
	
}

int main(node a)
{
	initiolase();
	
	push(&a);
	
	print("i:%d p:%d\n", a.integer, a.previos);
	
	return 0;
}
