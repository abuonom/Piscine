#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
char *ft_rev_print( char *str)
{
	int l = ft_strlen(str);
	while(l >= 0)
	{
		write(1,&str[l--],1);
	}
	write(1,"\n",1);
	return (str);
}
int main(int argc, char **argv)
{
	(void) argc;
	ft_rev_print(argv[1]);
	return 0;
}
