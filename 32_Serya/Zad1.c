#include <stdio.h>
int main()
{
	int arr[3][3];
	int i1;
	int i2;
	for (i1 = 0; i1<3; i1++)
	{
		for (i2 = 0; i2<3; i2++)
		{
			printf("%d,%d:", i1, i2);
			scanf("%d", &arr[i1][i2]);
			if (arr[i1][i2]<5)
				arr[i1][i2] = 111;
		}
	}
	
	for (i1 = 0; i1<3; i1++)
	{
		for (i2 = 0; i2<3; i2++)
		{
			printf("%d\n", arr[i1][i2]);
		}
	}
	return 0;
}
