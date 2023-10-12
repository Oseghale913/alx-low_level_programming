#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:   (Success)
 *
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int befl;
	unsigned long int bef2;
	unsigned long int aftl;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = l; i < 91; i++)
	{
		printf(",%lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	befl = (bef / l);
	bef2 = (bef % l);
	aftl = (aft / l);
	aft2 = (aft % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aftl + (aft2 / l));
		printf("%lu", aft2 % l);
		aftl = aftl + befl;
		befl = aftl - befl;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
