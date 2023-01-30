#include<stdio.h>
#include<stdlib.h>
 
int ERROR = 0;
const int INVALID_ARGUMENT_ERROR = 1;
const int ARGUMENT_OUT_OF_RANGE_ERROR = 1;
 
void foo(int* a) 
{
	(*a) = 2;
}
 
typedef struct 
{
	int capacity;
	int size;
	int* first_elem;
	int isClean;
} din_arr;
 
din_arr init_din_arr(int size) 
{
	din_arr a;
	if (size < 0) 
	{
		ERROR = INVALID_ARGUMENT_ERROR;
		return;
	}
	a.size = 0;
	a.capacity = size;
	a.first_elem = (int*)malloc(a.capacity * sizeof(int));
	a.isClean = 0;
	return a;
}
 
void clear_din_arr(din_arr* a) 
{
	if (!a->isClean)
	{
		free(a->first_elem);
		a->isClean=1;
	}
	else
	{
		printf("already clean\n");
	}
}
 
void push_back(din_arr* a, int element) 
{
	a->isClean=0;
	if (a->size == a->capacity) 
	{
		a->capacity *= 2;
		a->first_elem = (int*)realloc(a->first_elem, a->capacity);
	}
 
	a->first_elem[a->size] = element;
	a->size += 1;
}

void print_all(din_arr* a)
{
	int i;
	printf("a.size:%d  ", a->size);
	for (i = 0 ; i < a->size ; i++)
	{
		printf("%d ", a->first_elem[i]);
	}
	printf("\n");
}

void continous_push_back(din_arr* a)
{
	int input;
	if (!scanf("%d", &input))
	{
		return;
	}
	push_back(a, input);
	print_all(a);
	continous_push_back(a);
}

int get_elem(din_arr a, int index) 
{
	if (index < 0) 
	{
		ERROR = INVALID_ARGUMENT_ERROR;
	}
	if (index >= a.size) 
	{
		ERROR = ARGUMENT_OUT_OF_RANGE_ERROR;
	}
	return a.first_elem[index];
}
 
int main() 
{
	int e = 1;
	char input;
	din_arr a = init_din_arr(18);
	
	printf("e-end c-clear p-print q-continous push back\nLyuboj ne chislovoj simvol ostanovit continous push back\n");
	
	while (e)
	{
		scanf("%c", &input);
		if(input == 'e')
		{
			e = 0;
		}
		else if (input == 'c')
		{
			clear_din_arr(&a);
		}
		else if (input == 'q')
		{
			continous_push_back(&a);
		}
		else if (input == 'p')
		{
			print_all(&a);
		}
	}
	return 0;
}
