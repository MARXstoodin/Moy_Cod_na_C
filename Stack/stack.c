#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	int integer;
	struct node* previos;
}
node;

node* push(node* a)
{
	scanf("%d", a->integer);
	node b;
	b.previos = a;
	return &b;
}

void pop()
{
	
}

void top()
{
	
}

int main()
{
	node a;
	
	push(&a);
	
	print("i:%d p:%d\n", a.integer, a.previos);
	
	return 0;
}
