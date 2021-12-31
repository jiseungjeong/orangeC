#include <stdio.h>
int main(void)
{
	int floor=0, oNum=0;
	while (floor<5)
	{
		oNum = 0;
		while (oNum<floor)
		{
			printf("o");
			oNum++;
		}
		printf("*\n");
		floor++;
	}
	return 0;
}