#include <stdio.h>
int main(void)
{
	int num1 = 0, num2 = 0, bigNum=0, smallNum=0;
	scanf("%d %d", &num1, &num2);
	bigNum = (num1 > num2) ? num1 : num2;
	smallNum = (num1 > num2) ? num2 : num1;
	printf("%d - %d = %d\n", bigNum, smallNum, bigNum - smallNum);	
	return 0;
}