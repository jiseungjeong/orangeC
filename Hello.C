#include <stdio.h>

int SquareByValue(int n)
{
	return n * n;
}

void SquareByReference(int* ptr)
{
	*ptr = (*ptr) * (*ptr);
}
int main(void)
{
	int num = 8;
	printf("%d\n", SquareByValue(num));
	printf("%d\n", num);
	SquareByReference(&num);
	printf("%d\n", num);
	return 0;
}