#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 
int* randalloc(size_t n, int max_value) {
	int i;
	int* ptr = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; ++i) {
		ptr[i] = rand() % max_value;
	}
	return ptr;
}
 
void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
 
void bubble_sort(int* arr, size_t n) {
	size_t i;
	size_t j;
	for (i = 0; i < n; ++i) {
		for (j = 1; j < n; ++j) {
			if (arr[j - 1] > arr[j]) {
				swap(&arr[j - 1], &arr[j]);
			}
		}
	}
}
 
int comp(const void* a, const void* b) {
	int a1 = *(int*)a;
	int b1 = *(int*)b;
	return a1 - b1;
} 
 
void merge(int* a, size_t na, int* b, size_t nb, int* c) {
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	while (1) {
		if (i == na) {
			c[k] = b[j];
			j++;
		} else if (j == nb) {
			c[k] = a[i];
			i++;
		} else if (a[i] > b[j]) {
			c[k] = b[j];
			j++;
		} else if (a[i] <= b[j]) {
			c[k] = a[i];
			i++;
		}
		k++;
		if(i == na && j == nb) {
			break;
		}
	}
}
 
void merge_sort(int* arr, const size_t n) {
	size_t left = n / 2;
	size_t right = n - left;
	if (n > 2) {
		merge_sort(arr, left);
		merge_sort(arr + left, right);
	}
	int rec[n];
	merge(arr, left, arr + left, right, rec);
	memcpy(arr, rec, n * sizeof(int));
}
 
int main() {
	size_t n = 10;
	int i;
	int* arr = randalloc(n, 10);
	for (i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr, n);
	qsort(arr, n, sizeof(int), comp);
	merge_sort(arr, n);

	for (i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
 
	free(arr);
}
 
 
