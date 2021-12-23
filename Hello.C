#include <stdio.h>
int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("size of variable ch: %d \n", sizeof(ch));
	printf("size of variable inum: %d \n", sizeof(inum));
	printf("size of variable dnum: %d \n", sizeof(dnum));

	printf("size of char: %d \n", sizeof(char));
	printf("size of int: %d \n", sizeof(int));
	printf("size of long: %d \n", sizeof(long));
	printf("size of long long: %d \n", sizeof(long long));
	printf("size of float: %d \n", sizeof(float));
	printf("size of double: %d \n", sizeof(double));
	return 0;
}