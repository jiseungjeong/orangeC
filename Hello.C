#include <stdio.h>
#include <math.h>
int main(void)
{
	int leftUpX = 0, leftUpY = 0, rightDownX = 0, rightDownY = 0;
	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &leftUpX, &leftUpY);
	printf("우 하단의 x, y 좌표: ");
	scanf("%d %d", &rightDownX, &rightDownY);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", abs((rightDownX - leftUpX) * (leftUpY - rightDownY)));
	return 0;
}