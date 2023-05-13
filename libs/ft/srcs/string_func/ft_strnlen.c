
#include "libft.h"

size_t	ft_strnlen(const char *c, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (*c++ != '\0')
		cnt += 1;
	if (n < cnt)
		return (n);
	return (cnt);
}
