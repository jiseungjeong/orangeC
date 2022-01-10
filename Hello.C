#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point* pptr1, Point* pptr2)
{
	Point temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	SwapPoint(&pos1, &pos2);
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}