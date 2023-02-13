#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main()
{
	int r;
	time_t t;
	srand((unsigned) time(&t));
	char vvod;
	for(;;){
		r =  97 + rand()%(122 - 96);
		printf("%c\n",r);
		scanf("%s", &vvod);
		if((int)vvod == r)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
		system("cls");
	}
	return 0;
}
