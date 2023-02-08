#include <unistd.h>

int main(int argc, char **argv)
{
	argc -=1;
	int i = -1;
	while(argv[argc][++i])
	{
		write(1,&argv[argc][i],1);
	}
	write(1,"\n",1);
	return (0);
}
