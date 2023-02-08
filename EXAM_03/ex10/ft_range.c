#include <stdlib.h>
#include <stdio.h>
int ft_abs(int x)
{
	if(x < 0)
		return (-x);
	return x;
}
int *ft_range(int start, int end)
{
	int size;
	int *tab;
	int i;
	size = ft_abs(end - start) + 1;
	tab = malloc(size * sizeof(int));
	if(!tab)
		return 0;
	i = 0;
	if(size == 1)
		tab[0] = start;
	while(i < size)
	{
		if(start < end)
			tab[i]  = start + i;
		if(start > end)
			tab[i] = start - i;
		i++;
	}
	return (tab);
}
int main()
{
	int *tab;
    int i = 0;
    int start = -1;
    int end = 2 ;
    int size = ft_abs(end - start) + 1;

    tab = ft_range(start, end);
    while(i < size)
    {
		printf("%i\n", tab[i]);
		i++;
	}
	return 0;
}
