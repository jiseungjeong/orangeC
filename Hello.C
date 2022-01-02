#include <stdio.h>


int main(void)
{
	int sec = 0, min=0, hour=0;
	printf("input seconds: ");
	scanf("%d", &sec);
	hour = sec / 3600;
	sec %= 3600;
	min = sec / 60;
	sec %= 60;
	printf("[h:%d, m:%d, s:%d]", hour, min, sec);
	return 0;
}


