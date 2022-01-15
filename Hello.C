#include <stdio.h>

int ByteFile(FILE* fp, int set)
{
	int i = 0;
	fseek(fp, 0, SEEK_END);
	i = ftell(fp);
	fseek(fp, set, SEEK_SET);
	return i;
}

int main(void)
{
	int start, size;
	FILE* fp = fopen("simple.txt", "rt");
	start = ftell(fp);
	size = ByteFile(fp, start);
	printf("%d", size);
	return 0;
}