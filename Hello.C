#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp = fopen("mystery.txt", "rt");
	char str[20];
	if (fp == NULL)
	{
		puts("file open failed!");
		return -1;
	}
	while (fgets(str, sizeof(str), fp) != NULL) {
		printf("%s", str);
	}

	fclose(fp);
	return 0;
}