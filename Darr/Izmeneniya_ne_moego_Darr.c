#include<stdio.h>
#include<stdlib.h>
 
int ERROR = 0;
const int INVALID_ARGUMENT_ERROR = 1;
const int ARGUMENT_OUT_OF_RANGE_ERROR = 1;
 
void foo(int* a) {
	(*a) = 2;
}
 
typedef struct {
	int capacity;
	int size;
	int* first_elem;
} din_arr;
 
din_arr init_din_arr(int size) {
	din_arr a;
	if (size < 0) {
		ERROR = INVALID_ARGUMENT_ERROR;
		return;
	}
	a.size = 0;
	a.capacity = size;
	a.first_elem = (int*)malloc(a.capacity * sizeof(int));
	return a;
}
 
void clear_din_arr(din_arr arr) {
	free(arr.first_elem);
}
 
void push_back(din_arr* a, int element) {
	if (a->size == a->capacity) {
		a->capacity *= 2;
		a->first_elem = (int*)realloc(a->first_elem, a->capacity);
	}
 
	a->first_elem[a->size] = element;
	a->size += 1;
}

void print_all(din_arr* a)
{
	int i;
	for (i = 0 ; i < a->size ; i++)
	{
		printf("%d ", get_elem(a, i));
	}
	printf("\n");
}

void continous_push_back(din_arr a)
{
	int scan;
	scanf("%d", &scan);
	if (scanf("%d", &scan))
	{
		return;
	}
	push_back(&a, scan);
	print_all(&a);
	continous_push_back(a);
}

int get_elem(din_arr a, int index) {
	if (index < 0) {
		ERROR = INVALID_ARGUMENT_ERROR;
	}
	if (index >= a.size) {
		ERROR = ARGUMENT_OUT_OF_RANGE_ERROR;
	}
	return a.first_elem[index];
}
 
int main() {
	din_arr a = init_din_arr(1);
	
	continous_push_back(a);
	
	clear_din_arr(a);
	
	return 0;
}
