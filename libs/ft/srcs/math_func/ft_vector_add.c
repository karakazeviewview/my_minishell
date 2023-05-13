
#include "libft.h"

t_vector2	ft_vector_add(t_vector2 v1, t_vector2 v2)
{
	t_vector2	ret;

	ret.x = v1.x + v2.x;
	ret.y = v1.y + v2.y;
	return (ret);
}
