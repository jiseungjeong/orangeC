#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);
int main(void)
{
	double tem = 0;
	printf("input Celsius or Fahrenheit temperature: ");
	scanf("%lf", &tem);
	printf("CelToFah: %f\n", CelToFah(tem));
	printf("FahToCel: %f\n", FahToCel(tem));
	return 0;
}

double CelToFah(double cel)
{
	double fah = 1.8 * cel + 32;
	return fah;
}

double FahToCel(double fah)
{
	double cel = (fah - 32) / 1.8;
	return cel;
}
