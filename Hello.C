#include <stdio.h>

int maxBuy(int moneyHave, int snack);

int main(void)
{
	int money = 3500, interMoney1=0, interMoney2 = 0, interMoney3 = 0;
	int shrimpSnack = 700, creamBread = 500, coke = 400; // shrimpSnack: 700won, creamBread: 500won, coke: 400won
	int maxSS = 0, maxCB = 0, maxCoke = 0;
	printf("the money that you have in present: 3500 won\n");
	money = money - shrimpSnack - creamBread - coke;
	maxSS = money / shrimpSnack;
	maxCB = money / creamBread;
	maxCoke = money / coke;
	interMoney1 = money;
	for (int i = 0; i <=maxSS; i++)
	{
		money = interMoney1;
		money -= shrimpSnack * i;
		interMoney2 = money;
		for (int j = 0; j <= maxCB; j++)
		{
			money = interMoney2;
			money -= creamBread * j;
			if (money < 0)
				continue;
			interMoney3 = money;
			for (int k = 0; k <= maxCoke; k++)
			{
				money = interMoney3;
				money -= coke * k;
				if (money == 0)
				{
					printf("creamBread: %d , shrimpSnack: %d , coke: %d \n", j+1, i+1, k+1);
				}
			}
		}
	}
	printf("how do you buy?\n");
	return 0;
}
