#include <stdio.h>
#include <unistd.h>
#include "prototype.h"
void	multi(int *tab, int p, int base)
{

	int i = 0, a;
printf("p: %d\n",p);
write(1, "A.p\t\t",6);
	while (i < 4)
	{
		a = tab[i]*p;
		decimal_to_any(a, base);
		my_putchar(9);
		i++;
	}
}
