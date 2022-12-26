#include <stdio.h>
int main()
{
	int i = 1;
	int x;
	int g = 1;
	scanf("%d", &x);
	while (i != x)
	{
		i++;
		g+=i;
	}
	printf("%d", g);
	return 0;
}
