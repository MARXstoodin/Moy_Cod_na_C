#include <stdio.h>
int main()
{
	int i;
	int summ=0;
	int otvet=0;
	for (i = 0; summ<100; i++)
	{
		scanf("%d", &i);
		summ+=i;
		printf("%d\n\n",summ);
		otvet++;
	}
	printf("otvet:%d",otvet);
	return 0;
}
