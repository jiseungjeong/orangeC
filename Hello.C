#include <stdio.h>
#include <string.h>

struct employee
{
	char name[20];
	char id[20];
	int salaryInfo;
};

int main(void)
{
	struct employee employee1;
	printf("input employee name: "); scanf("%s", employee1.name);
	printf("input employee id: "); scanf("%s", employee1.id);
	printf("input employee salaryInfo: "); scanf("%d", &(employee1.salaryInfo));

	printf("name: %s\n", employee1.name);
	printf("id: %s\n", employee1.id);
	printf("salaryInfo: %d\n", employee1.salaryInfo);
	return 0;
}
