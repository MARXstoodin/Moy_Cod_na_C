#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int d=0;
	while(a)
	{
		d+=a%10;
		a = a/10;
		//printf("%d\n",d);
	}
	printf("%d",d);
	return 0;
}
