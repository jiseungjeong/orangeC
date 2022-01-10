#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DBShort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
} RDBuf;

int main(void)
{
	RDBuf buf;
	printf("input integer number: ");
	scanf("%d", &(buf.iBuf));

	printf("upper 2 byte: %u \n", buf.sBuf.upper);
	printf("lower 2 byte: %u \n", buf.sBuf.lower);
	printf("upper 1 byte ASCII: %c \n", buf.bBuf[0]);
	printf("lower 1 byte ASCII: %c \n", buf.bBuf[3]);

	return 0;
}