#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	printf("the range of the random number: 0 to %d \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("print the random number: %d \n", rand()%100);
	return 0;
}
