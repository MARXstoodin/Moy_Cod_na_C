#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
	//%USERPROFILE%
	const char* batPath =
	"C:\\Users\\111265\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\lol.bat";
	const char* progPath = 
	"C:\\Users\\111265\\PAPKA\\Secretnaya_papka\\Ciborg_ubiysa2_0.exe";
	
	FILE* input = fopen(batPath,"w");
	if (input == NULL)
	{
		printf("No");
		getc(stdin);
		return 1;
	}
	
	fprintf(input, "@echo off\n");
	fprintf(input, "cd %s", progPath);
	fprintf(input, "start Ciborg_ubiysa.exe\n off\n", progPath);
	fprintf(input, "exit\n", progPath);
	system("start Ciborg_ubiysa.exe");
	
	fclose(input);
}
