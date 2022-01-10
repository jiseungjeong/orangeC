#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {
		{"leeSeungGi", "010-1212-0001",21},
		{"jeongJiYoung", "010-1313-0002", 22},
		{"hanJiSu","010-1717-0003", 19}
	};

	int i;
	for (i = 0; i < 3; i++)
		printf("%-12s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	return 0;
}
