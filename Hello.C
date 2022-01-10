#include <stdio.h>

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr)
{
	printf("student name: %s \n", sptr->name);
	printf("student number: %s \n", sptr->stdnum);
	printf("school name: %s \n", sptr->school);
	printf("selected major: %s \n", sptr->major);
	printf("grade: %d-th", sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("name: "); scanf("%s", arr[i].name);
		printf("number: "); scanf("%s", arr[i].stdnum);
		printf("school: "); scanf("%s", arr[i].school);
		printf("major: "); scanf("%s", arr[i].major);
		printf("grade: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}