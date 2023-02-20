#include <stdio.h>
int main()
{
	int g;
	scanf("%d", &g);
	int input[g], i = 0, i2, i3, i4, a;
	
	printf("\n");
	
	while(i<g)
	{
		scanf("%d", &input[i]);
		i++;
	}
	
	printf("\n");
	
	for (i2 = 0 ; i2<i ; i2++)
	{
		printf("%d", input[i2]);
	}
	
	printf("\n\n");
	
	for(i2 = 0 ; i2 < i-1 ; i2++)
	{	
		for(i3 = 0 ; i3 < i-1 ; i3++)
		{
			if (input[i3] > input[i3+1])
			{
				a = input[i3];
				input[i3] = input[i3+1];
				input[i3+1] = a;
				for (i4 = 0 ; i4<i ; i4++)
				{
					printf("%d", input[i4]);
				}
				printf("\n");
			}
		}
	}
	printf("\n");
	for (i2 = 0 ; i2<i ; i2++)
	{
		printf("%d", input[i2]);
	}
	
	return 0;
}
