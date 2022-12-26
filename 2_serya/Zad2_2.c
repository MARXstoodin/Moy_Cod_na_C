#include <stdio.h>
int main()
{
	int nomer;
	scanf("%d", &nomer);
	char nazvanye[7][4] = {"pon","vto","sre","che","pat","sub","vos"};
	if (nomer<8 && nomer>0)
	{
		printf("%s", nazvanye[nomer-1]);	
	}
	else
	{
		printf("takogo dnya nedely net");
	}
	return 0;
}
