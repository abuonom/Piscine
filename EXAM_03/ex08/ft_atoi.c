#include <unistd.h>
#include <stdio.h>

int  ft_atoi(const char *str)
{
	int nbr = 0;
	int i = 0;
	int sign = 1;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d",ft_atoi(argv[1]));
	return 0;
}
