#include "prototype.h"
int	my_getnbr(char *str)
{
	int i, fin = 0, mult = 1;
	i = my_strlen(str)-1;
	while (i >= 0)
	{
		fin += mult*(str[i]-'0');
		mult *= 10;
		i--;
	}
	return (fin);
}
