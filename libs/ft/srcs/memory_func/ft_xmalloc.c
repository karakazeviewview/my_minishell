
#include "libft.h"

void	*ft_xmalloc(size_t size)
{
	void	*buff;

	buff = malloc(size);
	if (buff == NULL)
		exit(EXIT_FAILURE);
	return (buff);
}
