#include <stdio.h>
char *ft_strcpy(char *s1, char *s2)
{
	while(*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return s1;
}
int main(int argc, char **argv)
{
	(void) argc;
	char str[100];
	ft_strcpy(str,argv[1]);
	printf("%s",str);
	return 0;
}
