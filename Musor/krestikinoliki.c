#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int nomer;
	int drawProv=0;
	int nomProv;
	int AImove[9] = {0,1,2,3,4,5,6,7,8};
	bool win = false;
	bool igrok1 = true;
	bool isAI = false;
	bool Aiselect = false;
	char pole[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	printf("7|8|9\n4|5|6\n1|2|3\n");
	srand(time(NULL));
	while (Aiselect == false)
	{
		printf("Chose number of players(1 or 2):");
		scanf("%d", &nomProv);
		if (nomProv == 2)
		{
			isAI = false;
			Aiselect = true;
		}
		else if (nomProv == 1)
		{
			isAI = true;
			Aiselect = true;
		}
	}
	system("cls");
	while (win==false)
	{
		system("cls");
		printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n", pole[6], pole[7], pole[8], pole[3], pole[4], pole[5], pole[0], pole[1], pole[2]);
		if (igrok1==true)
		{
			printf("Player`s 1 move:");
			scanf("%d", &nomer);
			if (pole[nomer-1] == ' ')
				pole[nomer-1] = 'X';
			else
				continue;
		}
		else if (igrok1==false && isAI==false)
		{
			printf("Player`s 2 move:");
			scanf("%d", &nomer);
			if (pole[nomer-1] == ' ')
				pole[nomer-1] = 'O';
			else
				continue;
		}else
		{
			
			nomer = rand();
			printf("%d", nomer);
			if (pole[nomer] == AImove[4])
				pole[nomer] = 'O';
			else
				continue;
		}
		igrok1 = !igrok1;
		system("cls");
		printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n", pole[6], pole[7], pole[8], pole[3], pole[4], pole[5], pole[0], pole[1], pole[2]);
		nomProv=0;
		while (nomProv<=6)
		{
			if (pole[nomProv]=='X' && pole[nomProv+1]=='X' && pole[nomProv+2]=='X' || pole[nomProv]=='O' && pole[nomProv+1]=='O' && pole[nomProv+2]=='O')
			{
				win = true;
				if (igrok1 ==true)
					printf("Player 2 won!");
				else
					printf("Player 1 won!");
			}
			nomProv+=3;
		}
		nomProv=0;
		while (nomProv<=3)
		{
			if (pole[nomProv]=='X' && pole[nomProv+3]=='X' && pole[nomProv+6]=='X' || pole[nomProv]=='O' && pole[nomProv+3]=='O' && pole[nomProv+6]=='O')
			{
				win = true;
				if (igrok1 ==true)
					printf("Player 2 won!");
				else
					printf("Player 1 won!");
			}
			nomProv++;
		}
		if (pole[0]=='X' && pole[4]=='X' && pole[8]=='X' || pole[6]=='X' && pole[4]=='X' && pole[2]=='X' || pole[0]=='O' && pole[4]=='O' && pole[8]=='O' || pole[6]=='O' && pole[4]=='O' && pole[2]=='O')
		{
			win = true;
			if (igrok1 ==true)
				printf("Player 2 won!");
			else
				printf("Player 1 won!");
		}
		nomProv=0;
		drawProv=0;
		while (nomProv<8)
		{
			if (pole[nomProv]!=' ')
				drawProv++;
			nomProv++;
		}
		if (win==false && drawProv==8)
		{
			printf("Draw");
			win = true;
		}
	}
	return 0;
}
