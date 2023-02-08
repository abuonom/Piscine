#include <unistd.h>

int main()
{
	int n = 0;
	int mod = 0;
	int inte = 0;
	int c;
	while(++n <= 100)
	{
		if((n % 3 == 0) && (n % 5 == 0))
		{
			write(1,"fizzbuzz",8);
		}
		else if(n % 3 == 0)
			write(1,"fizz",4);
		else if(n % 5 == 0)
			write(1,"buzz",4);
		else if(n > 9)
		{
			inte = (n / 10) + 48;
			mod = (n % 10) + 48;
			write(1,&inte,1);
			write(1,&mod,1);
		}
		else
		{
			c = n + '0';
			write(1,&c,1);
		}
		write(1,"\n",1);
	}
}
