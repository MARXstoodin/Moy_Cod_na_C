#include <stdio.h>
int main()
{
	int i = 1;
	int a ;
	int b ;
	int c ;
	int d = 0;
	int err = scanf("%d", &a);
	while (i != a)
	{
		c = a%i;
		if (c == 0)
		{
			d = a/i;
			b = b + d;
		}
		i++;
	}
	printf("%d", b);
	return 0;
}
