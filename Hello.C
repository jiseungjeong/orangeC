#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar();
	if (ch >= 65 && ch <= 90)
	{
		putchar(ch+32);
	}
	else if (ch >= 97 && ch <= 122)
	{
		putchar(ch-32);
	}
	else
		printf("Error message");
	return 0;
}
