#include <stdio.h>
int strlen(char str[])
{
	int i = 0;
	while (str[i] != 0 && i<100)
	{
		i++;
	}
	return i;
}
void decisionPalindrome(char str[], int len)
{
	for (int i = 0; i < len/2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			printf("it's not palindrome.");
			return;
		}
	}
	printf("it's palindrome.");
}

int main(void)
{
	char word[100];
	printf("input string: ");
	scanf("%s", word);
	decisionPalindrome(word, strlen(word));
	return 0;
}