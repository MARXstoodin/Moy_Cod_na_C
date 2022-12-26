#include <stdio.h>

typedef struct 
{
	int* arr;
	int cap;
	int max;
}din_arr;
	
int main()
{
	int i;
	din_arr array;
	scanf("%d", &i);
	scanf("%d", &array.arr[i]);
	scanf("%d", &array.max);
	append(array);
	for (i=0; i < array.max ; i++)
	{
		printf("%d\n", array.arr[i]);
	}
	return 0;
}

void append(din_arr array, int new)
{
	while (array.cap < 1)
	{
		array.max++;
		array.cap = array.max - *array.arr;
		printf("array.max++;");
	}
}
