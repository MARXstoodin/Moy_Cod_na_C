#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int d = 2;
	scanf("%d", &n);
	func(d,n);
	return 0;
}
int func(int d, int n)
{
	if (n%d==0)
	{
		if ((n/(n/d))%2 != 0 && (n/(n/d)%3 != 0))
		{
			printf ("%d ",n/(n/d));
		}
	}
	d++;
	if(n==d)
	{
		if (n%2 != 0 && n%3 != 0)
		{
			printf ("%d ",n);
		}
		if (n%2 == 0)
		{
			printf ("2 ");
		}
		if (n%3 == 0)
		{
			printf ("3 ");
		}
		return;
	}
	func(d,n);
}
