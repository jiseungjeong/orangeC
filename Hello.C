#include <stdio.h>

int main(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("name sex age order input: ");
		scanf("%s %c %d", &name, &sex, &age);
		getchar(); // to delete the left \n
		fprintf(fp, "%s %c %d", name, sex, age);
	}

	fclose(fp);
	return 0;
}