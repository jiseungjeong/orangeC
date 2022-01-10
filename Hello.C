#include <stdio.h>

typedef enum syllable
{
	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("Do is white Doraji."); return;
	case Re:
		puts("Re is round record."); return;
	case Mi:
		puts("Mi is blue Minari."); return;
	case Fa:
		puts("Fa is pretty FarangBird."); return;
	case So:
		puts("So is small solBangUl."); return;
	case La:
		puts("La is Ladio."); return;
	case Ti:
		puts("Ti is zolzol TiNatMul."); return;
	}
	puts("Let's sing together~ Do Re Mi Fa Sol La Ti Do Sol Do~ Bomb!!~");

}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);
	return 0;
}