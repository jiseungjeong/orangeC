#include <stdio.h>

int main(void)
{
	char str[100] = {0}, interStr = '\0';
	int len = 0, max=0;
	scanf("%s", str);
	while (str[len] != '\0')
	{
		len++;
	}
	max = (int)str[0];
	for (int i = 0; i < len; i++)
	{
		if ((int)str[i] > max)
			max = (int)str[i];
	}
	printf("%c", max);
	return 0;
}