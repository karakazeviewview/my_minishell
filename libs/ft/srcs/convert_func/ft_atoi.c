
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str += 1;
	else if (*str == '-')
	{
		sign = 0;
		str += 1;
	}
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (!sign)
		num = 0 - num;
	return (num);
}
