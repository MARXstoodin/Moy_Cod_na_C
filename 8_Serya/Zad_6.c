#include <stdio.h>
int main()
{
	int a;
	int d;
	scanf("%d", &a);
	func(d,a);
	return 0;
}
int func(int d, int a)
{
	if(a==0)
	{
		return;
	}
	d=a%10;
	a = a/10;
	printf("%d", d);
	func(d,a);
}
