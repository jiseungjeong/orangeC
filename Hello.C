#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int seed, i;
	printf("input the value of seed: ");
	scanf("%d", &seed);
	srand(seed);

	for (i = 0; i < 5; i++)
		printf("print the integer number: %d\n", rand());
	return 0;
}
