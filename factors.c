#include "factor.h"

/**
 * factorize - The function factorize a prime number
 * @buf: pointer to the address of the prime number
 * Return: int
 */
int factorize(char *buf)
{

	u_int32_t num;
	u_int32_t i;

	num = atoi(buf);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}
