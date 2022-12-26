#include <stdio.h>

int main()
{
	int* arr = malloc(40);
	printf("%d ", arr[5]);
	arr[5] = 5;
	printf("%d", arr[5]);
	return 0;
}
