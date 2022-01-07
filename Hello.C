#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* makeStr(int n)
{
	if (n == 1)
		return "rock";
	else if (n == 2)
		return "scissor";
	else
		return "paper";
}

int main(void)
{
	int you = 0, computer=0;
	int win = 0, draw=0;
	while (1)
	{
		srand((int)time(NULL));
		printf("rock is 1, scissors are 2, and paper is 3: ");
		scanf("%d", &you);
		computer = rand() % 4;
		if ((computer == 1 && you == 3) || computer-you==1)
		{
			win++;
			printf("you select %s, the computer select %s, You win! \n", makeStr(you), makeStr(computer));
		}
		else if (computer ==you)
		{
			draw++;
			printf("you select %s, the computer select %s, You draw! \n", makeStr(you), makeStr(computer));
		}
		else
		{
			break;
		}
	}
	printf("you select %s, the computer select %s, You lose! \n", makeStr(you), makeStr(computer));
	printf("\n\n");
	printf("the result of game: %d win, %d draw \n", win, draw);

	return 0;
}
