
#include "libft.h"

int	*ft_arraydup(int const *src, size_t len)
{
	int	*p;

	p = (int *)malloc(len * sizeof(int));
	if (!p)
		return (NULL);
	ft_memmove(p, src, len * sizeof(int));
	return (p);
}
