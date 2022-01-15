#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystery.txt", "wt");
	if (fp == NULL)
	{
		puts("file open failed!");
		return -1;
	}
	fputs("#name: yoonSeongWoo\n", fp);
	fputs("#id: 900208-1012589\n", fp);
	fputs("#phoneNum: 010-1111-2222\n", fp);
	fclose(fp);
	return 0;
}