#include <stdio.h>

int main(void)
{
	char perID[7];
	char name[10];

	fputs("id code first 6 nubers input: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	fputs("name input: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("id code: %s \n", perID);
	printf("name: %s \n", name);
	return 0;
}
