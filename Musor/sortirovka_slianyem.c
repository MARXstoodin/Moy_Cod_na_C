#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int input2[a], input1[a], output[a*2], i, i2, i3=0, i4=0;
	
	printf("\n");
	
	for(i=0;i<a;i++)
	{
		scanf("%d", &input1[i]);
	}
	
	printf("\n");
	
	for(i=0;i<a;i++)
	{
		scanf("%d", &input2[i]);
	}
	
	printf("\n");
	
	for (i = 0 ; i<a ; i++)
	{
		printf("%d ", input1[i]);
	}
	
	printf("\n");
	
	for (i = 0 ; i<a ; i++)
	{
		printf("%d ", input2[i]);
	}
	
	printf("\n");
	
	for (i=0; i<a; i++)
	{
		for (i2=i2; i2<a; i2++)
		{
			if (input1[i2]<input2[i])
			{
				output[i4] = input1[i2];
				printf("i");
			}
			i4++;
		}
		for (i3=i3; i3<a; i3++)
		{
			if (input1[i3]>input2[i])
			{
				output[i4] = input2[i3];
				printf("e");
			}
			i4++;	
		}
	}
	
	printf("\n");
	
	for (i = 0 ; i<a*2 ; i++)
	{
		printf("%d ", output[i]);
	}
	return 0;
}
