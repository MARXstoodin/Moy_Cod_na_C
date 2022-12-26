#include <stdio.h>
int main()
{
	int i = 0;
	int n ;
	int k ;
	int otvet = 0;
	int summacifr = 0;
	int cifra = 1;
	int ostatok;
	scanf("%d", &n);
	scanf("%d", &k);
	while (cifra != n)
	{
		printf("%d:", cifra);
		while (i != cifra)
		{
			summacifr = cifra%10^i;
			ostatok = summacifr%k;
			i++;
		}
		if (ostatok == 0)
			{
				otvet++;
				printf("Delytsya ");
			}
		ostatok = 1;
		printf("%d\n", summacifr);
		i = 0;
		summacifr = 0;
		cifra++;
	}
	printf("Otvet:%d", otvet);
	return 0;
}
