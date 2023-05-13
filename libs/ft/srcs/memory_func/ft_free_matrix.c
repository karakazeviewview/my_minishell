
#include "libft.h"

void	ft_free_matrix(char ***src)
{
	size_t	i;
	char	**matrix;

	matrix = *src;
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		matrix[i] = NULL;
		i++;
	}
	free(matrix);
	matrix = NULL;
}
