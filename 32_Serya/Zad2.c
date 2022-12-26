#include <stdio.h>
int main()
{
	int r1;
	int r2;
	scanf("%d", &r1);
	scanf("%d", &r2);
	int arr[r1][r2];
	int i1;
	int i2;
	for (i1 = 0; i1<r1; i1++)
	{
		for (i2 = 0; i2<r2; i2++)
		{
			arr[i1][i2]= i1*i2;
		}
	}
	
	for (i1 = 0; i1<r1; i1++)
	{
		for (i2 = 0; i2<r2; i2++)
		{
			printf("%d,%d:", i1, i2);
			printf("%d\n", arr[i1][i2]);
		}
	}
	return 0;
}
