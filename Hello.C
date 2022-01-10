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
	struct person man1, man2;
	strcpy(man1.name, "AhnSeongJun");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("input name: "); scanf("%s", man2.name);
	printf("input phoneNumber: "); scanf("%s", man2.phoneNum);
	printf("input age: "); scanf("%d", &(man2.age));

	printf("name: %s \n", man1.name);
	printf("phoneNum: %s \n", man1.phoneNum);
	printf("age: %d \n", man1.age);
	
	printf("name: %s \n", man2.name);
	printf("phoneNum: %s \n", man2.phoneNum);
	printf("age: %d \n", man2.age);
	return 0;
}
