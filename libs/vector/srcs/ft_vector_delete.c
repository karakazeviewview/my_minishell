
#include "ft_vector.h"

void	ft_vector_clear(t_vector *vector)
{
	vector->end = vector->data;
	vector->len = 0;
}

void	ft_vector_delete(t_vector **vector)
{
	free((*vector)->data);
	(*vector)->data = NULL;
	free((*vector));
	*vector = NULL;
}
