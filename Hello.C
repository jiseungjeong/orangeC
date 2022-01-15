#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystery.txt", "at");
	if (fp == NULL)
	{
		puts("file open failed!");
		return -1;
	}
	fputs("#favorite food: jjamBbong, tangSuYuk\n", fp);
	fputs("#hobby: soccer\n", fp);
	fclose(fp);
	return 0;
}