
#include "libft.h"

bool	ft_vector_cmp(t_vector2 v1, t_vector2 v2)
{
	if (v1.x == v2.x && v1.y == v2.y)
		return (true);
	return (false);
}
