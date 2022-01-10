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
	struct employee arr[3];
	for (int i = 0; i < 3; i++)
	{
		printf("input employee name: "); scanf("%s", arr[i].name);
		printf("input employee id: "); scanf("%s", arr[i].id);
		printf("input employee salaryInfo: "); scanf("%d", &(arr[i].salaryInfo));
	}
	
	for (int i = 0; i < 3; i++)
	{
		printf("name: %s\n", arr[i].name);
		printf("id: %s\n", arr[i].id);
		printf("salaryInfo: %d\n", arr[i].salaryInfo);
	}
	
	return 0;
}