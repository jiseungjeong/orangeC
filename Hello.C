#include <stdio.h>

int main(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	char str[20];
	if (src == NULL || des == NULL)
	{
		puts("file open failed!");
		return -1;
	}

	while (fgets(str,sizeof(str),src) != NULL)
		fputc(str, des);

	if (feof(src) != 0)
		puts("file copy is completed!");
	else
		puts("file copy failed!");

	fclose(src);
	fclose(des);
	return 0;
}