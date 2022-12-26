#include <stdio.h>
int main()
{
	int A;
	int B;
	scanf("%d", &A);
	scanf("%d", &B);
	int i=0;
	int A1=A;
	if(B<A)
	{
		printf("Pravilno chisla wwidi, a?");
	}
	while(i<=1)
	{
		A1=A1+A1+1;
		i++;
	}
	printf("%d", A1);
	return 0;
}
