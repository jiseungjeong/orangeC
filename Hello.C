#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	printf("input string 1: ");
	scanf("%s", str1);
	printf("input string 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("two strings are perfectly same.");
	}
	else
	{
		puts("two strings are not same.");

		if (!strncmp(str1, str2, 3))
			puts("But first 3 characters are same");
	}
	return 0;
}
