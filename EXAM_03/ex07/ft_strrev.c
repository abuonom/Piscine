#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
char *ft_strrev( char *str)
{
	char temp;
	int i = ft_strlen(str) - 1;
	int x = 0;
	while(x < i)
	{
		temp = str[x];
		str[x] = str[i];
		str[i] = temp;
		x++;
		i--;
	}
	return (str);
}
int main(int argc, char **argv)
{
	(void) argc;
	ft_strrev(argv[1]);
	printf("%s",argv[1]);
	return 0;
}
