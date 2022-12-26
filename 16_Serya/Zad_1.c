#include <stdio.h>
int main()
{
	int a;
	int d;
	int otvet = 0;
	scanf("%d", &a);
	func(d,a,otvet);
	return 0;
}
int func(int d, int a, int otvet)
{
	if(a==0)
	{
		printf("%d", otvet);
		return;
	}
	d=a%10;
	a = a/10;
	
	if (d%2 == 0)
	{	
		otvet++;
	}
	func(d,a,otvet);
}
