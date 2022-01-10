#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char name1[50];
	char name2[50];
	int i=0, j=0;
	gets(name1);
	gets(name2);
	while (name1[i] != ' ')
	{
		i++;
	}
	while (name2[j] != ' ')
	{
		j++;
	}
	if (i != j)
		printf("names are diffent!\n");
	else if (!strncmp(name1, name2, i))
		printf("names are same!\n");
	else
		printf("names are different!\n");
	while (name1[i] != 0 && name2[j] != 0)
	{
		if (name1[i] != name2[j])
		{
			printf("ages are different!\n");
			break;
		}
		else if (name1[i + 1] == 0 && name2[j + 1] == 0)
			printf("ages are same!\n");
		i++;
		j++;
	}
	return 0;
}
