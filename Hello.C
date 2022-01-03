#include <stdio.h>

int main(void)
{
	char str[100] = {0}, interStr = '\0';
	int len = 0;
	scanf("%s", str);
	while (str[len] != '\0')
	{
		len++;
	}
	for (int j = 1; j < len / 2+1; j++)
	{
		interStr = str[len - 1];
		str[j - 1] = str[len - j];
		str[len - j] = interStr;

	}
	printf("reversed array: %s", str);
	return 0;
}