#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	
	i = 0; 
	if(min >= max)
	{
		return (NULL);
	}
	if(!(tab = (int*) malloc((max - min) * sizeof(*tab))))
		return (-1);
	while(min < max)
	{
		tab[i] = min;
		min++;
		i++;	
	}
	*range = tab;
	return (i);
}
