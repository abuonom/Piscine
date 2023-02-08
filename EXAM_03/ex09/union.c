#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
int check_1(char c,char *str,int pos)
{
	int i = pos - 1;
	while(str[i])
	{
		if(c == str[i])
			return (0);
		i--;
	}
	return (1);
}
int check_2(char c,char *str1, char *str2, int pos)
{
	int i = pos - 1;
	int x = 0;
	while(str2[i])
	{
		if(c == str2[i])
			return(0);
		i--;
	}
	while(str1[x])
	{
		if(c == str1[x])
			return (0);
		x++;
	}
	return (1);
}
int main(int argc, char **argv)
{
	char c;
	int x = 0;
	int y = 0;
	if(argc == 3)
	{
		while(argv[1][x] != '\0')
		{
			c = argv[1][x];
			if(check_1(c,argv[1],x) == 1)
			{
				write(1,&c,1);
			}
			x++;
		}
		while(argv[2][y] != '\0')
		{
			c = argv[2][y];
			if(check_2(c,argv[1],argv[2],y) == 1)
			{
				write(1,&c,1);
			}
		y++;
		}
	}
	write(1,"\n",1);
	return 0;
}
