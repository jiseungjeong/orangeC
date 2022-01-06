#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	printf("the number of the returned string: %d \n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d-th string: %s \n", i + 1, argv[i]);
	}
	return 0;
}
