#include <stdio.h>
int main()
{
	int i;
	int otvet=0;
	int chislo=10;
	for (i = 0; i<90; i++)
	{
		//printf("%d %d\n", chislo/10, chislo%10);
		//printf("%d\n\n",((chislo%10) * (chislo%10)) + ((chislo/10) * (chislo/10)));
		if((((chislo%10) * (chislo%10)) + ((chislo/10) * (chislo/10)))%13 == 0)
		{
			printf("%d ", chislo);
			//otvet++;
		}
		chislo++;
	}
	//printf("otvet:%d", otvet);
	return 0;
}
