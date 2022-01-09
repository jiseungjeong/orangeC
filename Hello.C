#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[100];
	int i = 0, total=0;
	printf("input string: ");
	scanf("%s", str);
	while (str[i] != '\0')
	{
		if((int)(str[i])>=48&&(int)(str[i])<=57)
			total=total+(int)(str[i])-48;
		i++;
	}
	printf("total: %d", total);
	return 0;
}
