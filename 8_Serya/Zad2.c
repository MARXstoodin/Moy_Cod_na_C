#include <stdio.h>
#include <math.h>
int main()
{
	int a = a;
	int n;
	int g;
	int i=2;
	scanf("%d",&n);
	g = a;
	func(a, n, i, g);
	return 0;
}
int func(int a, int n, int i, int g)
{
	if(n==1 || n==2)
	{
		printf("YES");
		return;
	}	
	if (g<n)
	{
		g=pow(2,i);
		//printf("%d ", g);
		i++;
		if (g==n)
		{
			printf("YES");
			return;
		}
		func(a, n, i, g);
	}
	else
		printf("NO");
}
