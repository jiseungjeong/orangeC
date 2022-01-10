#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point pos1;
	Point pos2;
} Rectangle;

void CalArea(Rectangle rec)
{
	int area = (rec.pos2.xpos - rec.pos1.xpos) * (rec.pos2.ypos - rec.pos1.ypos);
	printf("Area: %d\n", area);
}

void Print4Points(Rectangle rec)
{
	printf("[%d, %d]\n", rec.pos1.xpos, rec.pos1.ypos);
	printf("[%d, %d]\n", rec.pos2.xpos, rec.pos1.ypos);
	printf("[%d, %d]\n", rec.pos1.xpos, rec.pos2.ypos);
	printf("[%d, %d]\n", rec.pos2.xpos, rec.pos2.ypos);
}

int main(void)
{
	Rectangle rec = { 0,0,100,100 };
	CalArea(rec);
	Print4Points(rec);
	return 0;
}