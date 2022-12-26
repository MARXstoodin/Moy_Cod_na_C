#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);
	int i=0;
	if(a>0)
	{
		i++;
	}
	if(b>0)
	{
		i++;
	}
	if(c>0)
	{
		i++;
	}
	printf("%d", i);
	return 0;
}
