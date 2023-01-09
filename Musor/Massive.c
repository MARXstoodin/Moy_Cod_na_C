#include <stdio.h>
int main()
{
	int index1;
	int index2;
	printf("Vvidite index1: ");
	scanf("%d", &index1);
	printf("\n\nVvidite index2: ");
	scanf("%d", &index2);
	//int a[index1,index2];
	int c;
	int i1=0;
	while (i1 != index1)
	{
		while (i2 != index2)
		{
			printf("\nVvidite chislo pod indexsom %d: ", i+1);
			scanf("%d", &a[i]);
			i2++;
		}
		/*printf("\nVvidite chislo pod indexsom %d: ", i+1);
		scanf("%d", &a[i]);*/
		i1++;
	}
	while (true)
	{
		printf("\n\nVvidite index: ");
		scanf("%d", &c);
		if (c < b+1 && c > 0)
		{
			printf("%d", a[c-1]);
		}
		else
		{
			printf("Index otsutstvuet.", a[c-1]);
		}
	}
	return 0;
}
