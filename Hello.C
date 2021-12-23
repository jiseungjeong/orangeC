#include <stdio.h>
int main(void)
{
	double num1=0, num2=0;
	printf("enter 2 numbers: ");
	scanf("%lf %lf", &num1, &num2);
	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f\n", num1, num2, num1 - num2);
	printf("%f * %f = %f\n", num1, num2, num1 * num2);
	printf("%f / %f = %f\n", num1, num2, num1 / num2);
	return 0;
}