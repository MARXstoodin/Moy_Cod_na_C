#include <stdio.h>

typedef struct 
{
	int i;
	int arr[];
}din_arr;
	
int main()
{
	int i;
	din_arr array;
	scanf("%d", &array.i);
	while (1)
	{
		scanf("%d", &i);
		scanf("%d", &array.arr[i-1]);
		if (i > array.i && i>0)
		{
			while (array.i != i)
			{
				array.i++;
			}
		}
		printf("\n");
		for (i=0; i < array.i ; i++)
		{
			printf("%d\n", array.arr[i]);
		}
		printf("\n");
	}
	
	return 0;
}

