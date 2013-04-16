#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"
#include <unistd.h>
int 	main(int ac, char **av)
{
	if (ac >= 8 && (av[1][0] >= '1' && av[1][0] <= '4'))
	{
		int bon = debut(ac, atoi(av[1]));
		if (bon != 0)
		{
			int matriceA[4];
			int matriceB[5];
			int i, a = 0, b,c = 3, d = 6;
			b = arret(ac);
			if (atoi(av[2]) == 2 || atoi(av[2]) == 3)
				b -= 1;
			printf("MatriceA:\t");
			if (atoi(av[1]) == 2)
				c = 4, d = 7;
			for (i = c; i <= d; i++)
			{
				matriceA[a] = any_to_decimal(av[i], atoi(av[2]));
				printf("%s\t", av[i]);
				a++;
			}
			a = 0;
			
			if (atoi(av[1]) != 2) 
			{
				printf("\n");
				printf("MatriceB:\t");
				for (i = 7, a = 0; i < ac; i++)
				{
					matriceB[a] = any_to_decimal(av[i], atoi(av[2]));
					printf("%s\t", av[i]);
					a++;
					if (i == 10)
						break;
				}
			}			
				printf("\n");
			if (atoi(av[1]) == 1)	
				somme(matriceA, matriceB,atoi(av[2]));
			else if (atoi(av[1]) == 2)	
				multi(matriceA, atoi(av[3]),atoi(av[2]));
			else if (atoi(av[1]) == 3 )	
				produitv(matriceA, matriceB,atoi(av[2]));
			else if (atoi(av[1]) == 4)	
				produitm(matriceA, matriceB,atoi(av[2]));
			else
				printf("OPTION NON VALIDE");
			printf("\n");
		}
		else
			printf("Verifiez les options:\n");
	}
	else
		printf("Verifiez les options\n");
return (0);
}
