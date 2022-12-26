#include <stdio.h>
int main()
{
	int a = 0;
	int n;
	scanf("%d",&n);
	func(a, n);
	return 0;
}
int func(int a, int n)
{
	if (a!=n)
	{
		printf("%d ", a+1);
		a++;
		func(a, n);
	}
}
