#include <stdio.h>
int main()
{
	char a[4] = {'a','b','c','d'};
	char *b = &a[0];
	printf("%c", (*int)(b));
}
