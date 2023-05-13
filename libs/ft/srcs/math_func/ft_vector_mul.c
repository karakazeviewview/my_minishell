
#include "libft.h"

t_vector2	ft_vector_mul(t_vector2 v1, float t)
{
	t_vector2	ret;

	ret.x = (float)v1.x * t;
	ret.y = (float)v1.y * t;
	return (ret);
}
