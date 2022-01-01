#include <stdio.h>
int GCD(int sNum, int bNum);

int main(void)
{
	int num1 = 0, num2 = 0, bigNum=0, smallNum=0, gcd=0;
	printf("input 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	bigNum = (num1 > num2) ? num1 : num2;
	smallNum = (num1 < num2) ? num1 : num2;
	printf("GCD: %d", GCD(smallNum, bigNum));
	return 0;
}

int GCD(int sNum, int bNum)
{
	int interNum = 0;
	if (bNum % sNum == 0)
	{
		return sNum;
	}
	interNum = bNum;
	bNum = sNum;
	sNum = interNum % sNum;
	GCD(sNum, bNum);
}
