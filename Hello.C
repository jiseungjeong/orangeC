#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 5; i++)
		printf("the result of the %d die: %d \n", i , rand()%7);
	return 0;
}
