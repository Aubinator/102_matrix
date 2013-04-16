#include <stdio.h>
#include <unistd.h>
#include "prototype.h"
void	decimal_to_any(int nbr, int end);
void	somme(int *tabA, int *tabB, int base)
{
	int i = 0,a;
	write(1, "A+B\t \t",6);
	while (i  < 4)
	{
		a = tabA[i]+tabB[i];
		decimal_to_any(a, base);
		my_putchar('\t');
		i++;
	}

}
