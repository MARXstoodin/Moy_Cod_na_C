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
	int schitat;
	din_arr a = init_din_arr(1);
// 
//	switch (ERROR) {
//		case INVALID_ARGUMENT_ERROR:
//			printf("INVALID_ARGUMENT_ERROR\n");
//			return 1;
//			break;
//	}
// 
//	printf("capacity: %d", a.capacity);
	push_back(&a, 1);
	push_back(&a, 2);
	push_back(&a, 3);
	scanf("%d", schitat);
	push_back(&a, schitat);
 
	printf("%d %d %d", get_elem(a, 0), get_elem(a, 1), get_elem(a, 2), get_elem(a, 3));
 
	clear_din_arr(a);
//	printf("Hello world!\n");
}
