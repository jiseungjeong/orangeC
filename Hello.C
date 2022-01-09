#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	char perID[7];
	char name[10];

	fputs("id code first 6 nubers input: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();

	fputs("name input: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("id code: %s \n", perID);
	printf("name: %s \n", name);
	return 0;
}
