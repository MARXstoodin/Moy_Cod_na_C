#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	if (a%2 == 0)
	{
		if (b%2 == 0)
		{
			printf("chetnost chisel odinacovaya");
			return;
		}
		printf("chislo dva");
	}
	else if (b%2 == 0)
	{
		printf("chislo odin");
	}
	else
	{
		printf("chetnost chisel odinacovaya");
	}
	return 0;
}
